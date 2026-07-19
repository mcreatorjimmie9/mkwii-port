/* Function at 0x805B3F04, size=352 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 6 function(s) */

int FUN_805B3F04(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B3F10
    r30 = r3;
    /* li r31, 0 */ // 0x805B3F18
    /* li r27, 0 */ // 0x805B3F1C
    /* clrlwi r0, r27, 0x18 */ // 0x805B3F20
    /* mulli r0, r0, 0x920 */ // 0x805B3F24
    r3 = r30 + r0; // 0x805B3F28
    r0 = *(0x1770 + r3); // lbz @ 0x805B3F2C
    r4 = r3 + 0x1720; // 0x805B3F30
    if (==) goto 0x0x805b3f74;
    /* clrlwi r0, r31, 0x18 */ // 0x805B3F3C
    /* li r5, 0 */ // 0x805B3F40
    /* mulli r29, r0, 0xec */ // 0x805B3F44
    r3 = r30 + r29; // 0x805B3F48
    r28 = r3 + 4; // 0x805B3F4C
    r3 = r28;
    FUN_805B1180(r5, r3); // bl 0x805B1180
    r4 = r30 + r29; // 0x805B3F58
    r3 = r28 + 0xc8; // 0x805B3F5C
    r0 = *(8 + r4); // lwz @ 0x805B3F60
    *(0x10 + r4) = r0; // stw @ 0x805B3F64
    r4 = *(8 + r4); // lwz @ 0x805B3F68
    FUN_805B1F90(r3); // bl 0x805B1F90
    r31 = r31 + 1; // 0x805B3F70
    r27 = r27 + 1; // 0x805B3F74
    if (<) goto 0x0x805b3f20;
    /* clrlwi r0, r31, 0x18 */ // 0x805B3F80
    if (>=) goto 0x0x805b3ffc;
    /* li r27, 0 */ // 0x805B3F8C
    /* clrlwi r0, r27, 0x18 */ // 0x805B3F90
    /* mulli r0, r0, 0xb0 */ // 0x805B3F94
    r3 = r30 + r0; // 0x805B3F98
    r0 = *(0x3bf0 + r3); // lbz @ 0x805B3F9C
    r4 = r3 + 0x3ba0; // 0x805B3FA0
    if (==) goto 0x0x805b3ff0;
    /* clrlwi r0, r31, 0x18 */ // 0x805B3FAC
    /* li r5, 0 */ // 0x805B3FB0
    /* mulli r28, r0, 0xec */ // 0x805B3FB4
    r3 = r30 + r28; // 0x805B3FB8
    r29 = r3 + 4; // 0x805B3FBC
    r3 = r29;
    FUN_805B1180(r5, r3); // bl 0x805B1180
    r4 = r30 + r28; // 0x805B3FC8
    r3 = r29 + 0xc8; // 0x805B3FCC
    r0 = *(8 + r4); // lwz @ 0x805B3FD0
    *(0x10 + r4) = r0; // stw @ 0x805B3FD4
    r4 = *(8 + r4); // lwz @ 0x805B3FD8
    FUN_805B1F90(r3); // bl 0x805B1F90
    r31 = r31 + 1; // 0x805B3FE0
    /* clrlwi r0, r31, 0x18 */ // 0x805B3FE4
    if (>=) goto 0x0x805b3ffc;
    r27 = r27 + 1; // 0x805B3FF0
    if (<) goto 0x0x805b3f90;
    r27 = r31;
    /* b 0x805b4040 */ // 0x805B4000
    /* clrlwi r0, r27, 0x18 */ // 0x805B4004
    r4 = r30 + 0x1690; // 0x805B4008
    /* mulli r28, r0, 0xec */ // 0x805B400C
    /* li r5, 0 */ // 0x805B4010
    r3 = r30 + r28; // 0x805B4014
    r29 = r3 + 4; // 0x805B4018
    r3 = r29;
    FUN_805B1180(r5, r3); // bl 0x805B1180
    r4 = r30 + r28; // 0x805B4024
    r3 = r29 + 0xc8; // 0x805B4028
    r0 = *(8 + r4); // lwz @ 0x805B402C
    *(0x10 + r4) = r0; // stw @ 0x805B4030
    r4 = *(8 + r4); // lwz @ 0x805B4034
    FUN_805B1F90(r3); // bl 0x805B1F90
    r27 = r27 + 1; // 0x805B403C
    /* clrlwi r0, r27, 0x18 */ // 0x805B4040
    if (<) goto 0x0x805b4004;
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x805B4054
    return;
}