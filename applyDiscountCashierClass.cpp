class Cashier {
public:
    int custCount = 0;
    int custMod;
    int discount;
    unordered_map<int,int> productPrices;
    
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        this->custMod = n;
        this->discount = discount;
        for(int i = 0; i < products.size(); i ++) {
            this->productPrices[products[i]] = prices[i];
        }
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        custCount++;
        double sum = 0;
        for(int i = 0; i < product.size(); i++) {
            sum += productPrices[product[i]] * amount[i];
        }
        if(this->custCount % this->custMod == 0) {
            sum = sum - (this->discount * sum) / 100;
        }
        return sum;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */