#include "Item.hpp"

using namespace std;

int Item::totalRevenue = 0;
int Item::totalItems = 0;

Item::Item() : serialNum(totalItems + 1)
{
	this->stock = 0;
	this->sold = 0;
	this->price = 0;
	totalItems++;
};
/* Ctor default: stok adalah 0 dan harga barang adalah 0 */

Item::Item(int stock, int price) : serialNum(totalItems + 1)
{
	this->stock = stock;
	this->price = price;
	this->sold = 0;
	totalItems++;
};
Item::Item(const Item &other) : serialNum(totalItems + 1)
{
	this->stock = other.stock;
	this->price = other.price;
	this->sold = other.sold;
	totalItems++;
};
/* cctor item, mengkopi seluruh atribut item, termasuk atribut sold */
Item::~Item(){};

int Item::getSerialNum() const
{
	return this->serialNum;
};
int Item::getSold() const
{
	return this->sold;
};
int Item::getPrice() const
{
	return this->price;
};

void Item::addStock(int addedStock)
{
	this->stock += addedStock;
};
/* Menambahkan stok item. Tidak akan bernilai negatif. */
void Item::sell(int soldStock)
{
	if (this->stock >= soldStock)
	{
		this->stock -= soldStock;
		this->sold += soldStock;
		totalRevenue += soldStock * this->price;
	}
	else
	{
		this->sold += this->stock;
		totalRevenue += this->stock * this->price;
		this->stock = 0;
	}
};
/* Menjual item. Jika item tidak cukup, maka item terjual hanya sampai stok item habis */
void Item::setPrice(int newPrice)
{
	this->price = newPrice;
};
