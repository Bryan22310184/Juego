class Bala {
public:
	Bala(int x, int y);
	void mover();
	bool fuera();
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y;
};