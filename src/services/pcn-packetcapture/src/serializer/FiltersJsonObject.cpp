/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "FiltersJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

FiltersJsonObject::FiltersJsonObject() {
  m_snaplenIsSet = false;
  m_srcIsSet = false;
  m_dstIsSet = false;
  m_l4protoIsSet = false;
  m_sportIsSet = false;
  m_dportIsSet = false;
}

FiltersJsonObject::FiltersJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_snaplenIsSet = false;
  m_srcIsSet = false;
  m_dstIsSet = false;
  m_l4protoIsSet = false;
  m_sportIsSet = false;
  m_dportIsSet = false;


  if (val.count("snaplen")) {
    setSnaplen(val.at("snaplen").get<uint32_t>());
  }

  if (val.count("src")) {
    setSrc(val.at("src").get<std::string>());
  }

  if (val.count("dst")) {
    setDst(val.at("dst").get<std::string>());
  }

  if (val.count("l4proto")) {
    setL4proto(val.at("l4proto").get<std::string>());
  }

  if (val.count("sport")) {
    setSport(val.at("sport").get<uint16_t>());
  }

  if (val.count("dport")) {
    setDport(val.at("dport").get<uint16_t>());
  }
}

nlohmann::json FiltersJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_snaplenIsSet) {
    val["snaplen"] = m_snaplen;
  }

  if (m_srcIsSet) {
    val["src"] = m_src;
  }

  if (m_dstIsSet) {
    val["dst"] = m_dst;
  }

  if (m_l4protoIsSet) {
    val["l4proto"] = m_l4proto;
  }

  if (m_sportIsSet) {
    val["sport"] = m_sport;
  }

  if (m_dportIsSet) {
    val["dport"] = m_dport;
  }

  return val;
}

uint32_t FiltersJsonObject::getSnaplen() const {
  return m_snaplen;
}

void FiltersJsonObject::setSnaplen(uint32_t value) {
  m_snaplen = value;
  m_snaplenIsSet = true;
}

bool FiltersJsonObject::snaplenIsSet() const {
  return m_snaplenIsSet;
}

void FiltersJsonObject::unsetSnaplen() {
  m_snaplenIsSet = false;
}

std::string FiltersJsonObject::getSrc() const {
  return m_src;
}

void FiltersJsonObject::setSrc(std::string value) {
  m_src = value;
  m_srcIsSet = true;
}

bool FiltersJsonObject::srcIsSet() const {
  return m_srcIsSet;
}

void FiltersJsonObject::unsetSrc() {
  m_srcIsSet = false;
}

std::string FiltersJsonObject::getDst() const {
  return m_dst;
}

void FiltersJsonObject::setDst(std::string value) {
  m_dst = value;
  m_dstIsSet = true;
}

bool FiltersJsonObject::dstIsSet() const {
  return m_dstIsSet;
}

void FiltersJsonObject::unsetDst() {
  m_dstIsSet = false;
}

std::string FiltersJsonObject::getL4proto() const {
  return m_l4proto;
}

void FiltersJsonObject::setL4proto(std::string value) {
  m_l4proto = value;
  m_l4protoIsSet = true;
}

bool FiltersJsonObject::l4protoIsSet() const {
  return m_l4protoIsSet;
}

void FiltersJsonObject::unsetL4proto() {
  m_l4protoIsSet = false;
}

uint16_t FiltersJsonObject::getSport() const {
  return m_sport;
}

void FiltersJsonObject::setSport(uint16_t value) {
  m_sport = value;
  m_sportIsSet = true;
}

bool FiltersJsonObject::sportIsSet() const {
  return m_sportIsSet;
}

void FiltersJsonObject::unsetSport() {
  m_sportIsSet = false;
}

uint16_t FiltersJsonObject::getDport() const {
  return m_dport;
}

void FiltersJsonObject::setDport(uint16_t value) {
  m_dport = value;
  m_dportIsSet = true;
}

bool FiltersJsonObject::dportIsSet() const {
  return m_dportIsSet;
}

void FiltersJsonObject::unsetDport() {
  m_dportIsSet = false;
}


}
}
}

