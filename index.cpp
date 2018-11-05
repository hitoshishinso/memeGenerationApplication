/*Created By IMEGOR (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 11111
#define lim 1e9+7
#define ll long long 
#define SQRT 1060
#define sci(a) scanf("%d", &a)
#define scl(a) scanf("%lld", &a)
#define pfi(a) printf("%d\n", a)
#define pfl(a) printf("%lld\n", a)
#define pfcase(t) printf("Case #%d:\n",t)
#define pf(d) printf("%s\n",d)
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define vec vector<ll> 
#define smap unordered_map <int,int> 

using namespace std ;

unordered_map<string, double> tag_max; 

class meme{
public:
    meme(){}
	bool type; double text_fitness, image_fitness, image_text_relation; 
	vector<string> image_tags_list, text_tags_list;
	meme(bool type, double text_fitness, double image_fitness, double image_text_relation){
		this->type = type; this->text_fitness=text_fitness; 
		this->image_fitness = image_fitness; this->image_text_relation = image_text_relation;
	}

    void fill_tags(string img[], int N, string txt[], int M){
        for(int i=0; i<N; i++){image_tags_list.push_back(img[i]);}
        for(int i=0; i<M; i++){image_tags_list.push_back(txt[i]);}
    }
	
    void print(){
        cout << this->type << " " << this->text_fitness << " "<< this->image_fitness << " "<< 
        this->image_text_relation << " ::  { ";
        for(auto i = image_tags_list.begin(); i != image_tags_list.end(); i++ ){
            cout << *i << "|";  
        }cout << " }" << endl;
    }

};


int main(){


	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends 

//Code starts from here
    
    string tags[] = {"dope", "politics", "funny", "sexual_content", "sports", "art"};
    for(int i=0; i<6; i++){tag_max[tags[i]] = rand();}
    int N = 1000; meme data[N]; 

    for(int i=0; i<N; i++){
        bool dex = false; if(abs(rand())%2 == 1){dex = true;}
        data[i] = meme(dex, rand()%1007, rand()%1007, rand()%1007);
        
    }


    for(int i=0; i<N; i++){
        int sup = abs(rand())%20;
        vector<string> s; 
        for(int i=0; i<sup; i++){
           int index = abs(rand())%6;
           s.push_back(tags[index]); 
           //data[i].image_tags_list.push_back(tags[index]);
        }
        data[i].image_tags_list = s;
        
    }


    for(int i=0; i<N; i++){
        data[i].print();
    }

}

