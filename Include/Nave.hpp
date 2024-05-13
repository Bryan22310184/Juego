class Nave {
public:
	Nave(int x, int y, int corazones, int vidas);
	void pintar();
	void borrar();
	void mover();
	void pintar_corazones();
	void morir();
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	int getVidas() {
		return vidas;
	}
	void COR() {
		corazones--;
	}
private:
	int x, y;
	int corazones;
	int vidas;
};