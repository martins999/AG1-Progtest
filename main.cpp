#include <iostream>

using namespace std;

struct bvs_tree_elements
{
    int value;

    struct bvs_tree_elements * left_child, * right_child;

    bvs_tree_elements  * parent;

    bvs_tree_elements()
    {
        this->parent = nullptr;
        this->left_child = nullptr;
        this->right_child = nullptr;

    }

    bvs_tree_elements operator = (const bvs_tree_elements &element)
    {
        parent = element.parent;
        right_child = element.right_child;
        left_child = element.left_child;
    }


};


class bvs_tree
{
    private:

        bvs_tree_elements root;
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
        }

        void bvs_show(bvs_tree_elements * element)
        {

            cout << element->value << endl;

            if( element->left_child != nullptr)
            {
                bvs_show(element->left_child);
            }

            if ( element->right_child != nullptr)
            {
                bvs_show(element->right_child);
            }

        }


        int bv_show_min()
        {
            return min;
        }

        int bv_show_max()
        {
            return max;
        }

        int bvs_add_key(bvs_tree_elements x)
        {

            if(depth == 0)
            {
                this->root.value = x.value;
                this->depth++;


            } else{

                bvs_tree_elements current = this->root;

                for(int i = 0; i <= depth; i++ )
                {
                    if( current.value > x.value)
                    {
                        //left
                        if( current.left_child == NULL )
                        {
                            current.left_child = &x;
                            x.parent = &current;
                            cout << "LEFT - 1" << endl;

                            return 0;

                        } else{

                            bvs_tree_elements * tmp = current.left_child;

                            current = *tmp;
                        }


                    } else{

                        //right
                        if( current.right_child == NULL )
                        {
                            current.right_child =  &x;
                            x.parent = &current;

                            cout << current.right_child->value << endl;

                            return 0;

                        } else{

                            bvs_tree_elements * tmp = current.right_child;
                            current = *tmp;
                        }

                    }
                }


            }


            return 0;
        }

        int bvs_remove_key(bvs_tree_elements x)
        {


            return 0;
        }


        bvs_tree_elements bvs_show_first_children(bvs_tree_elements x)
        {

        }

        bvs_tree_elements bv_show_parent(bvs_tree_elements x)
        {

        }

        bvs_tree_elements * get_root()
        {
            return &(this->root);
        }
};



int main()
{
    bvs_tree tree = bvs_tree();

    int command_number, x, y;

    command_number = 0;
    x=0;
    y=0;

   while( true )
   {
       cin >> command_number;

       if( command_number == 6)
       {
           tree.bvs_show(tree.get_root());
           return 0;
       }


      if ( command_number != 5)
      {
          cin >> x;

          bvs_tree_elements new_element;
          new_element.value = x;

          switch (command_number )
          {
              case 1:
                  tree.bvs_add_key(new_element);
                  break;

              default:

                  break;
          }


      } else{

          cin >> x;
          cin >> y;
      }

      //cout << command_number << " " << x << " " << y << endl;
   }




}