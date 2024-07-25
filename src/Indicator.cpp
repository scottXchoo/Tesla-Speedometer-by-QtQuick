#include <QDebug>

#include "Car.h"
#include "Indicator.h"

Indicator::Indicator(Car *car) : car_(car) {}

void Indicator::leftIndicatorSlot() {
  if (car_) {
	bool isOn = car_->is_left_indicator_on();
	qDebug() << "Indicator: Left indicator slot called. Is " << (isOn ? "ON" : "OFF");
  }
}