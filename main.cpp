#include <iostream>
#include <vector>

using namespace std;

struct bvs_tree_elements
{
    int value;

    bvs_tree_elements * parent;

    vector<bvs_tree_elements> l_childrens;
    vector<bvs_tree_elements> r_childrens;

    bvs_tree_elements()
    {
        this->parent = nullptr;
    }
};


class bvs_tree
{
    private:

        bvs_tree_elements tree;
        int depth;
        int min;
        int max;

    public:

        bvs_tree()
        {
            //default settings
            this->min=0;
            this->max=0;
            this->depth=0;
            this->tree.value=0;
        }

        void bvs_show()
        {

        }

        int bv_show_min()
        {
            return min;
        }

        int bv_show_max()
        {
            return max;
        }

        bvs_tree_elements vs_show_first_children(bvs_tree_elements x)
        {

        }

        bvs_tree_elements bv_show_parent(bvs_tree_elements x)
        {

        }
};



int main()
{

    int command_number, x, y;

    command_number = 0;
    x=0;
    y=0;

    while( cin >> command_number >> x )
    {
        if(cin >> y)
        {
            cout << command_number << x << y << endl;
        }
        else {
            cout << command_number << x << endl;
        }


    }


    return 0;

}