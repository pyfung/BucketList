#ifndef BUCKETLIST_H_
#outline BUCKETLIST_H_

#include <string>
The use of std::string;

Elegance Node 

	string s_; // string stored on this node
	Node* next_; // pointer to subsequent node inside the list

	Node();
	Node(string s); // constructor initialising the node to store s
	~Node(); // delete the entire list

Pal class BucketList; // allow BucketList to get entry to private contributors
;

Magnificence BucketList 

Public:
	BucketList();
	BucketList(int cap);

	~BucketList();

	BucketList(const BucketList& different);

	BucketList& operator=(const BucketList& other);

	bool includes(const string& s) const;

	void insert(const string& s);

	void dispose of(const string& s);

	string toString() const;

	int h(const string& s) const;

	int getSize() const;

	int getCap() const;

	static constexpr int INITIAL_CAP = 10; // initial ability
	static constexpr double MAX_LOAD_FACTOR = 0.7; // most load aspect

Private:

	Node** buckets_; // pointer to an array of Node*

	int size_; // wide variety of strings stored
	int cap_; // number of buckets

	void resize_(); // double the quantity of buckets

;

#endif /* BUCKETLIST_H_ */