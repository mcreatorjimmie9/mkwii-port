/* Function at 0x807D1EA8, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 4 function(s) */

int FUN_807D1EA8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807D1EB4
    r25 = r3;
    r26 = r4;
    /* li r30, 0 */ // 0x807D1EC0
    /* li r31, 0 */ // 0x807D1EC4
    /* li r27, 0 */ // 0x807D1EC8
    r5 = *(0xc0 + r3); // lwz @ 0x807D1ECC
    r29 = *(0x18 + r5); // lwz @ 0x807D1ED0
    /* b 0x807d1ef8 */ // 0x807D1ED4
    r3 = *(0xc0 + r25); // lwz @ 0x807D1ED8
    /* lwzx r3, r3, r27 */ // 0x807D1EDC
    FUN_807B5F00(); // bl 0x807B5F00
    if (==) goto 0x0x807d1ef0;
    r30 = r30 + 1; // 0x807D1EEC
    r27 = r27 + 4; // 0x807D1EF0
    r31 = r31 + 1; // 0x807D1EF4
    if (<) goto 0x0x807d1ed8;
    r3 = *(0xc4 + r25); // lwz @ 0x807D1F00
    /* li r31, 0 */ // 0x807D1F04
    /* li r29, 0 */ // 0x807D1F08
    /* li r27, 0 */ // 0x807D1F0C
    r28 = *(0x18 + r3); // lwz @ 0x807D1F10
    /* b 0x807d1f38 */ // 0x807D1F14
    r3 = *(0xc4 + r25); // lwz @ 0x807D1F18
    /* lwzx r3, r3, r27 */ // 0x807D1F1C
    FUN_807B5F00(); // bl 0x807B5F00
    if (==) goto 0x0x807d1f30;
    r31 = r31 + 1; // 0x807D1F2C
    r27 = r27 + 4; // 0x807D1F30
    r29 = r29 + 1; // 0x807D1F34
    if (<) goto 0x0x807d1f18;
    if (<=) goto 0x0x807d1f5c;
    r3 = *(0xc0 + r25); // lwz @ 0x807D1F48
    r4 = r26;
    r3 = *(0 + r3); // lwz @ 0x807D1F50
    FUN_807B5FF0(r4); // bl 0x807B5FF0
    /* b 0x807d1f78 */ // 0x807D1F58
    if (>=) goto 0x0x807d1f74;
    r3 = *(0xc4 + r25); // lwz @ 0x807D1F60
    r4 = r26;
    r3 = *(0 + r3); // lwz @ 0x807D1F68
    FUN_807B5FF0(r4); // bl 0x807B5FF0
    /* b 0x807d1f78 */ // 0x807D1F70
    /* li r3, 0 */ // 0x807D1F74
    r0 = *(0x34 + r1); // lwz @ 0x807D1F7C
    return;
}