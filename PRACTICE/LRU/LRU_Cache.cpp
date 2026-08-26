#include <iostream>
#include <unordered_map>
using namespace std;

class LRUCache {
	private:

		// Node for doubly linked list
		struct Node {
			int key;
			int value;

			Node* prev;
			Node* next;

			Node(int k, int v) {
				key = k;
				value = v;
				prev = nullptr;
				next = nullptr;
			}
		};

		int capacity;

		// Dummy nodes
		Node* head;
		Node* tail;

		// key -> address of node
		unordered_map<int, Node*> mp;

		// Add node immediately after head
		void addNode(Node* node) {
			node->next = head->next;
			node->prev = head;

			head->next->prev = node;
			head->next = node;
		}

		// Remove a node from linked list
		void removeNode(Node* node) {
			Node* prevNode = node->prev;
			Node* nextNode = node->next;

			prevNode->next = nextNode;
			nextNode->prev = prevNode;
		}

		// Move node to front (most recently used)
		void moveToFront(Node* node) {
			removeNode(node);
			addNode(node);
		}

		// Remove least recently used node
		Node* removeLRU() {
			Node* lru = tail->prev;

			removeNode(lru);

			return lru;
		}

	public:

		LRUCache(int capacity) {
			this->capacity = capacity;

			// Dummy head and tail
			head = new Node(-1, -1);
			tail = new Node(-1, -1);

			head->next = tail;
			tail->prev = head;
		}

		int get(int key) {

			// TODO:
			// 1. Check if key exists in mp
			// 2. If not found, return -1
			// 3. If found:
			//      - get Node*
			//      - move it to front
			//      - return its value

			if(mp.find(key) != mp.end()) {
				Node* foundNode = mp[key];

				moveToFront(foundNode);
				return foundNode->value;
			}
			return -1;
		}

		void put(int key, int value) {

			// TODO:
			// Case 1: key already exists
			//
			//      - get existing Node*
			//      - update value
			//      - move node to front
			//
			// Case 2: key doesn't exist
			//
			//      - create new Node
			//      - add it to front
			//      - add it to mp
			//
			//      - if size > capacity:
			//          remove LRU node
			//          erase it from mp
			//          delete it


			// Case 1: key already exists
			if (mp.find(key) != mp.end()) {

				Node* foundNode = mp[key];

				// Update value
				foundNode->value = value;

				// Mark as most recently used
				moveToFront(foundNode);
			}

			// Case 2: key doesn't exist
			else {

				// Create new node
				Node* newNode = new Node(key, value);

				// Add to front of linked list
				addNode(newNode);

				// Add to map
				mp[key] = newNode;

				// Cache is full
				if (mp.size() > capacity) {

					// Remove least recently used node
					Node* lru = removeLRU();

					// Remove from map
					mp.erase(lru->key);

					// Free memory
					delete lru;
				}
			}
		}

		~LRUCache() {
			Node* current = head;

			while (current != nullptr) {
				Node* next = current->next;
				delete current;
				current = next;
			}
		}
};


// LeetCode-style testing
int main() {

	LRUCache cache(2);

	cache.put(1, 1);
	cache.put(2, 2);

	cout << cache.get(1) << endl;  // 1

	cache.put(3, 3);

	cout << cache.get(2) << endl;  // -1

	cache.put(4, 4);

	cout << cache.get(1) << endl;  // -1
	cout << cache.get(3) << endl;  // 3
	cout << cache.get(4) << endl;  // 4

	return 0;
}

