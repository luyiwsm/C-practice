#include "queen_attack.h"
attack_status_t can_attack(position_t q1, position_t q2){
    attack_status_t status = CAN_NOT_ATTACK;
    if(q1.row > 7||q1.column > 7||q2.row > 7||q2.column > 7) return INVALID_POSITION;
    if(q1.row == q2.row&&q1.column == q2.column)return INVALID_POSITION;
    if(q1.row == q2.row||q1.column == q2.column) return CAN_ATTACK;
    int row_diff = (int)q1.row - (int)q2.row;
    int column_diff = (int)q1.column - (int)q2.column;
    if(row_diff == column_diff||row_diff == -column_diff)status = CAN_ATTACK;
    return status;
}