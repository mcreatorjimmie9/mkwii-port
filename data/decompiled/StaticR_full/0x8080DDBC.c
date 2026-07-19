/* Function at 0x8080DDBC, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_8080DDBC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8080DDC8
    r27 = r3;
    r28 = r4;
    /* li r29, 0 */ // 0x8080DDD4
    /* li r30, 0 */ // 0x8080DDD8
    /* lis r31, 0 */ // 0x8080DDDC
    /* b 0x8080de30 */ // 0x8080DDE0
    /* li r3, 0 */ // 0x8080DDE8
    if (<) goto 0x0x8080de00;
    r0 = *(0xe0 + r27); // lwz @ 0x8080DDF0
    if (>=) goto 0x0x8080de00;
    /* li r3, 1 */ // 0x8080DDFC
    if (!=) goto 0x0x8080de1c;
    r12 = *(0xdc + r27); // lwz @ 0x8080DE08
    r3 = r27 + 0xdc; // 0x8080DE0C
    r12 = *(0x18 + r12); // lwz @ 0x8080DE10
    /* mtctr r12 */ // 0x8080DE14
    /* bctrl  */ // 0x8080DE18
    r3 = *(0xe4 + r27); // lwz @ 0x8080DE1C
    r29 = r29 + 1; // 0x8080DE20
    /* lwzx r3, r3, r30 */ // 0x8080DE24
    r30 = r30 + 4; // 0x8080DE28
    *(0x11c + r3) = r28; // stw @ 0x8080DE2C
    r0 = *(0 + r31); // lwz @ 0x8080DE30
    if (<) goto 0x0x8080dde4;
    r0 = *(0x24 + r1); // lwz @ 0x8080DE40
    return;
}