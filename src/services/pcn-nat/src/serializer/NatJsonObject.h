/**
* nat API
* nat API generated from nat.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* NatJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "RuleJsonObject.h"
#include <vector>
#include "NattingTableJsonObject.h"
#include "polycube/services/cube.h"

namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  NatJsonObject : public JsonObjectBase {
public:
  NatJsonObject();
  NatJsonObject(const nlohmann::json &json);
  ~NatJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Name of the nat service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

  /// <summary>
  ///
  /// </summary>
  RuleJsonObject getRule() const;
  void setRule(RuleJsonObject value);
  bool ruleIsSet() const;
  void unsetRule();

  /// <summary>
  ///
  /// </summary>
  const std::vector<NattingTableJsonObject>& getNattingTable() const;
  void addNattingTable(NattingTableJsonObject value);
  bool nattingTableIsSet() const;
  void unsetNattingTable();

private:
  std::string m_name;
  bool m_nameIsSet;
  RuleJsonObject m_rule;
  bool m_ruleIsSet;
  std::vector<NattingTableJsonObject> m_nattingTable;
  bool m_nattingTableIsSet;
};

}
}
}
}

