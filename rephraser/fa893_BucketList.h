#ifndef BUCKETLIST_H_
#define BUCKETLIST_H_

#consist of <string>
Using std::string;

Beauty Node 

	string s_; // string saved on this node
	Node* next_; // pointer to subsequent node inside the listing

	Node();
	Node(string s); // constructor initialising the node to keep s
	~Node(); // delete the whole list

Pal magnificence BucketList; // allow BucketList to access non-public members
;

Magnificence BucketList 

Public:
	BucketList();
	BucketList(int cap);

	~BucketList();

	BucketList(const BucketList& distinct);

	BucketList& operator=(const BucketList& other);

	bool includes(const string& s) const;

	void insert(const string& s);

	void put off(const string& s);

	string toString() const;

	int h(const string& s) const;

	int getSize() const;

	int getCap() const;

	static constexpr int INITIAL_CAP = 10; // preliminary ability
	static constexpr double MAX_LOAD_FACTOR = 0.7; // most load component

Personal:

	Node** buckets_; // pointer to an array of Node*

	int size_; // wide kind of strings stored
	int cap_; // range of buckets

	void resize_(); // double the quantity of buckets

;

#endif /* BUCKETLIST_H_ */