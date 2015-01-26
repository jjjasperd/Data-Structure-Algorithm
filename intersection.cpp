template <typename Object> 
list<Object> intersection(const list<Object> &L1, const list<Object> &L2){
	list<Object> intersect;
	auto iter1 = L1.begin();
	auto iter2 = L2.begin();
	while(iter1 != L1.edn() && iter2 != L2.end()){
		if(*iter1 == *iter2){
			intersect.push_back(*iter1);
			++iter1;
			++iter2;
		}
		else if(*iter1 < *iter2){
			++iter1;
		}
		else{
			++iter2;
		}
	}
	return intersect;
}