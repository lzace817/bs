// comment varargs_fn to to compile without errors
void varargs_fn(const char *fmt, ...)
{
  (void)fmt;
}

struct Point {
  int x;
};

// void foo(Point * var); // uncomment this to compile without errors
void foo(Point * var)
{
  (void)var;
}

void setup() {
  Point param;
	foo(&param);
}

void loop() {

}