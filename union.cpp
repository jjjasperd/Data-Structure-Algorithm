template< typename Object>
list<Object> union(const list<Object> &L1, const list<Object> &L2){
	list<Object> u;
	auto iter1 = L1.begin();
	auto iter2 = L2.begin();
	while(iter1 != L1.end() && iter2 != L2.end()){
		if（*iter1 < *iter2）{
			u.push_back(*iter1);
			++iter1;
		}
		else if(*iter1 == *iter2){
			u.push_back(*iter1);
			++iter1;
			++iter2;
		}
		else{
			u.push_back(*iter2);
			++iter2;
		}

	}
	return u;
}