/* Function at 0x80682018, size=172 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_80682018(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -256(r1) */
    /* saved r26 */
    /* li r4, 1 */ // 0x80682020
    /* li r5, 0 */ // 0x80682024
    *(0x104 + r1) = r0; // stw @ 0x80682028
    /* li r0, -1 */ // 0x8068202C
    /* stmw r26, 0xe8(r1) */ // 0x80682030
    r26 = r3;
    *(0x2530 + r3) = r0; // stw @ 0x80682038
    r12 = *(0x2280 + r3); // lwzu @ 0x8068203C
    r12 = *(0x10 + r12); // lwz @ 0x80682040
    /* mtctr r12 */ // 0x80682044
    /* bctrl  */ // 0x80682048
    r3 = r26 + 0x2280; // 0x8068204C
    /* li r4, 2 */ // 0x80682050
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r3 = r26;
    r4 = r26 + 0x2280; // 0x8068205C
    FUN_80671C34(r3, r4, r3, r4); // bl 0x80671C34
    r3 = r26 + 0x2280; // 0x80682064
    r5 = r26 + 0x251c; // 0x80682068
    /* li r4, 1 */ // 0x8068206C
    /* li r6, 0 */ // 0x80682070
    /* li r7, 0 */ // 0x80682074
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r26;
    /* li r4, 0xf */ // 0x80682080
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    /* lis r30, 0 */ // 0x80682088
    r28 = r26;
    r29 = r26 + 0x44; // 0x80682090
    /* li r27, 0 */ // 0x80682094
    r31 = r30 + 0; // 0x80682098
    r3 = r26;
    r4 = r27;
    r5 = r29;
    /* li r6, 0 */ // 0x806820A8
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
    r5 = r27;
    r4 = r30 + 0; // 0x806820B8
    /* crclr cr1eq */ // 0x806820BC
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}