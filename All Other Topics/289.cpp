class Solution {
public:
	void gameOfLife(vector<vector<int>>& board) {
		vector<vector<int>> v = board;

		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[i].size();j++){

				//c1 will keep track of the no of 1's in
				// all the eight neighbour
				int c1 = 0;

				//upper left
				if((i-1)>=0 && (j-1)>=0){
					if(board[i-1][j-1] ==1)
						c1++;
				}

				//upper
				if((i-1)>=0 && j>=0){
					if(board[i-1][j] == 1)
						c1++;
				}

				//upper right 
				if((i-1)>=0 && (j+1)<board[i].size()){
					if(board[i-1][j+1] == 1)
						c1++;
				}

				//left 
				if((i>=0) && (j-1)>=0){
					if(board[i][j-1] == 1)
						c1++;
				}

				//right
				if(i>=0 && (j+1)<board[i].size()){
					if(board[i][j+1] == 1)
						c1++;
				}

				//lower left
				if((i+1)<board.size() && (j-1)>=0){
					if(board[i+1][j-1] == 1)
						c1++;
				}

				//down
				if((i+1)<board.size() && j>=0){
					if(board[i+1][j] == 1)
						c1++;
				}

				//lower right 
				if((i+1)<board.size() && (j+1)<board[i].size()){
					if(board[i+1][j+1] == 1)
						c1++;
				}

				//now check the value of the current cell
				int val = board[i][j];

				if(val == 0){
					//check do we have 3 c1, to make this cell alive
					if(c1 == 3)
						v[i][j] = 1;
					else
						v[i][j] = 0;

				}else{
					//check the value of c1
					if((c1<2) || (c1>3))
						v[i][j] = 0;
					else
						v[i][j] = 1;

				}     
			}
		}

		board = v;

	}
};