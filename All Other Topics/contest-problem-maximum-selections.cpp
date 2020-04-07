
bool sort1(pair<int, int>& a, pair<int, int>& b){ 
    return (a.second < b.second); 
}
int max_non_overlapping( vector< pair<int,int> >& range ){
    sort(range.begin(), range.end(), sort1); 
    int r1 = range[0].second;
    int count=0;
    for (int i = 1; i < range.size(); i++) { 
		int l1 = range[i].first; 
		int r2 = range[i].second;
		if (l1 >= r1) { 
			count++;
			r1 = r2;
		} 
	} 
    return count+1;
}