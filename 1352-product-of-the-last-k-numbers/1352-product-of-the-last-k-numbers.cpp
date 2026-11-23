class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() {
        ans = {};
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int p = ans.size();
        int res = 1;
        for(int i = 1; i <= k; i++){
            res *= ans[p-1];
            p--;
        }
        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */