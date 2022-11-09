#include "BucketList.h"

Node::Node() {
	// IMPLEMENT ME
}

Node::~Node() {
	// IMPLEMENT ME
}

BucketList::BucketList() {
	// IMPLEMENT ME
}

BucketList::~BucketList() {
	// IMPLEMENT ME
}

BucketList::BucketList(const BucketList& other) {
	// IMPLEMENT ME
}

BucketList& BucketList::operator=(const BucketList& other) {
	// IMPLEMENT ME
	return *this;
}

bool BucketList::contains(const string& s) const {

	// THIS IS DONE FOR YOU AS AN EXAMPLE
	// but you need to change something...

	int hc = h(s) % INITIAL_CAP; // ...here.
	Node* temp = buckets_[hc];
	while (temp != nullptr) {
		if (temp->s_ == s) return true;
		temp = temp->next_;
	}
	return false;
}

void BucketList::insert(const string& s) {
	// IMPLEMENT ME
}

void BucketList::remove(const string& s) {
	// IMPLEMENT ME
}

string BucketList::toString() const {
	// IMPLEMENT ME
	return ""; // dummy
}

int BucketList::h(const string& s) const {
	// IMPLEMENT ME
	return -1; // dummy
}

int BucketList::getSize() const {
	// IMPLEMENT ME
	return -1; // dummy
}

int BucketList::getCap() const {
	// IMPLEMENT ME
	return -1; // dummy
}
