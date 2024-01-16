/***********************************
 * MiniStack
 * Written by Allie Ianello
 ***********************************/

#define LIST_MAX  10

template <class item>
class ministack
{
public:
	ministack();
	void push(item x);
	void pop();
	item top();
	int size();
private:
	int length;
	item stack[LIST_MAX];
};

/**********************************
 * Constructor
 **********************************/
template <class item>
ministack<item>::ministack()
{
	length = 0;
}


/**********************************
 * Push
 **********************************/
template <class item>
void ministack<item>::push(item x)
{
	if (length >= LIST_MAX)
	{
		cout << "Ministack overflow!" << endl;
	}
	else
	{
		stack[length++] = x;
	}
}

/**********************************
 * Pop
 **********************************/
template<class item>
void ministack<item>::pop()
{
	if (length <= 0)
	{
		cout << "Ministack underflow!" << endl;
	}
	else
	{
		length--;
	}
}

/**********************************
 * Top
 **********************************/
template<class item>
item ministack<item>::top()
{

	if (length <= 0)
	{
		cout << "Ministack underflow!" << endl;
		return stack[0];
	}
	return stack[length-1];
}

/**********************************
 * Size
 **********************************/
template <class item>
int ministack<item>::size()
{
	return length;
}