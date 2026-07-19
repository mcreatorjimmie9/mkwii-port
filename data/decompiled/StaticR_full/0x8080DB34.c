/* Function at 0x8080DB34, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_8080DB34(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8080DB40
    r26 = r3;
    /* li r27, 0 */ // 0x8080DB48
    /* li r28, 0 */ // 0x8080DB4C
    /* li r30, 3 */ // 0x8080DB50
    /* li r31, 1 */ // 0x8080DB54
    /* b 0x8080dbd8 */ // 0x8080DB58
    /* li r3, 0 */ // 0x8080DB60
    if (<) goto 0x0x8080db78;
    r0 = *(0xe0 + r26); // lwz @ 0x8080DB68
    if (>=) goto 0x0x8080db78;
    /* li r3, 1 */ // 0x8080DB74
    if (!=) goto 0x0x8080db94;
    r12 = *(0xdc + r26); // lwz @ 0x8080DB80
    r3 = r26 + 0xdc; // 0x8080DB84
    r12 = *(0x18 + r12); // lwz @ 0x8080DB88
    /* mtctr r12 */ // 0x8080DB8C
    /* bctrl  */ // 0x8080DB90
    r3 = *(0xe4 + r26); // lwz @ 0x8080DB94
    /* lwzx r29, r3, r28 */ // 0x8080DB98
    *(0xb0 + r29) = r30; // stw @ 0x8080DB9C
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8080DBA4
    r12 = *(0x90 + r12); // lwz @ 0x8080DBA8
    /* mtctr r12 */ // 0x8080DBAC
    /* bctrl  */ // 0x8080DBB0
    r12 = *(0 + r29); // lwz @ 0x8080DBB4
    r3 = r29;
    /* li r4, 0 */ // 0x8080DBBC
    r12 = *(0x68 + r12); // lwz @ 0x8080DBC0
    /* mtctr r12 */ // 0x8080DBC4
    /* bctrl  */ // 0x8080DBC8
    *(0x121 + r29) = r31; // stb @ 0x8080DBCC
    r28 = r28 + 4; // 0x8080DBD0
    r27 = r27 + 1; // 0x8080DBD4
    r0 = *(0xb4 + r26); // lwz @ 0x8080DBD8
    if (<) goto 0x0x8080db5c;
    /* li r0, 3 */ // 0x8080DBE4
    *(0xb8 + r26) = r0; // stw @ 0x8080DBE8
    r0 = *(0x24 + r1); // lwz @ 0x8080DBF0
    return;
}