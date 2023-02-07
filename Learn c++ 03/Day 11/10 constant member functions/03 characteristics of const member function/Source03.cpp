class Dummy {
public:
	void F() const;
	static void G() const;
};

void Dummy::F() const {}

void Dummy::G() {}

int main() const {}

/*
- Global (like main()) and static(like G()) member functions cannot be constant functions,
  since they lack presense of 'this' pointer.
- Only non-static member functions can be constant functions.
*/
