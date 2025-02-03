#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>
using namespace std;

struct product
{
    int productId;
    string name;
    string catagorey;
};

struct order
{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

void printProducts(const vector<product> &products)
{
    cout << "Products List:" << endl;
    for (const auto &p : products)
    {
        cout << "Product ID: " << p.productId
             << ", Name: " << p.name
             << ", Category: " << p.catagorey << endl;
    }
    cout << endl;
}

void printRecentCustomers(const deque<string> &recentCust)
{
    cout << "Recent Customers:" << endl;
    for (const auto &cust : recentCust)
    {
        cout << cust << endl;
    }
    cout << endl;
}

void printOrderHistory(const list<order> &orderHistory)
{
    cout << "Order History:" << endl;
    for (const auto &ord : orderHistory)
    {
        cout << "Order ID: " << ord.orderId
             << "Product ID: " << ord.productId
             << ", Quantity: " << ord.quantity
             << ", Customer ID: " << ord.customerId
             << ", Order Date: " << ctime(&ord.orderDate);
    }
    cout << endl;
}

void printCategories(const set<string> &categories)
{
    cout << "Product Categories:" << endl;
    for (const auto &cat : categories)
    {
        cout << cat << endl;
    }
    cout << endl;
}

void printCustomerOrders(const multimap<string, order> &customerOrder)
{
    cout << "Customer Orders:" << endl;
    for (const auto &co : customerOrder)
    {
        cout << "Customer ID: " << co.first << endl
             << "Order ID: " << co.second.orderId
             << ", Product ID: " << co.second.productId
             << ", Quantity: " << co.second.quantity
             << ", Order Date: " << ctime(&co.second.orderDate);
    }
    cout << endl;
}

void printCustomerData(const unordered_map<string, string> &customerData)
{
    cout << "Customer Data:" << endl;
    for (const auto &custData : customerData)
    {
        cout << "Customer ID: " << custData.first
             << ", Name: " << custData.second << endl;
    }
    cout << endl;
}

void printUniqueProductIDs(const unordered_set<int> &uniqueProductsIds)
{
    cout << "Unique Product IDs:" << endl;
    for (const auto &id : uniqueProductsIds)
    {
        cout << id << endl;
    }
    cout << endl;
}

int main()
{
    vector<product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smartphone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk", "Home"}};

    deque<string> recentCust = {"C001", "C002", "C003"};
    recentCust.push_back("C004");
    recentCust.push_front("C005");

    list<order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 101, 2, "C002", time(0)});
    orderHistory.push_back({3, 101, 5, "C003", time(0)});

    set<string> categories;
    for (const auto &product : products)
    {
        categories.insert(product.catagorey);
    }

    map<int, int> productsStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, order> customerOrder;
    for (const auto &order : orderHistory)
    {
        customerOrder.insert({order.customerId, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Affan"},
        {"C004", "Max"},
        {"C005", "Harry"},
    };

    unordered_set<int> uniqueProductsIds;
    for (const auto &product : products)
    {
        uniqueProductsIds.insert(product.productId);
    }

    int choice;
    cout << "Enter Choice: " << endl
         << "1. Products" << endl
         << "2. Recent Customers" << endl
         << "3. Order History" << endl
         << "4. Catogeries" << endl
         << "5. customer Order" << endl
         << "6. customer Date" << endl
         << "7. customer Unique Product Ids" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        printProducts(products);
        break;
    case 2:
        printRecentCustomers(recentCust);
        break;
    case 3:
        printOrderHistory(orderHistory);
        break;
    case 4:
        printCategories(categories);
        break;
    case 5:
        printCustomerOrders(customerOrder);
        break;
    case 6:
        printCustomerData(customerData);
        break;
    case 7:
        printUniqueProductIDs(uniqueProductsIds);
        break;

    default:
        cout << "Enter Valid Input!" << endl;
    }

    return 0;
}
