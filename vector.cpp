#include<iostream>
#include<vector>

void array(){
  int arr[] = {12,3,17,8};
  std::vector<int> v(arr,arr+4);

  while(!v.empty()){
    std::cout<<v.back()<<" ";
    v.pop_back();
  }
  std::cout<<std::endl;
  std::cout << v[3] <<" "<<v.size()<<std::endl;
  if(v.empty()) std::cout<<"Empty Vector\n";
}

int main(){
  std::vector<int> v(3);
  v[0] = 23;
  v[1] = 12;
  v[2] = 9;

  v.push_back(17) ;
  for (size_t i = 0; i < v.size() ; i++) {
    /* code */
    std::cout << v[i] << ' ';
  }
  std::cout << std::endl;
  array();
}
