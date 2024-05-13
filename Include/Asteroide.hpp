class Asteroide {
public:
	Asteroide(int x, int y);
	void pintar();
	void mover();
	void choque(Nave &nave);
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y;
};