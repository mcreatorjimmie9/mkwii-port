/* Function at 0x807C6CE4, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807C6CE4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r30, 0 */ // 0x807C6CF8
    *(0x14 + r1) = r29; // stw @ 0x807C6CFC
    /* lis r29, 0 */ // 0x807C6D00
    r29 = r29 + 0; // 0x807C6D04
    *(0x10 + r1) = r28; // stw @ 0x807C6D08
    r28 = r3;
    r3 = *(0 + r30); // lwz @ 0x807C6D10
    FUN_807BFFC0(); // bl 0x807BFFC0
    r31 = r3;
    r3 = *(0 + r30); // lwz @ 0x807C6D1C
    /* li r4, 0x64 */ // 0x807C6D20
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, -1 */ // 0x807C6D2C
    if (==) goto 0x0x807c6d48;
    if (==) goto 0x0x807c6d50;
    if (==) goto 0x0x807c6d58;
    /* b 0x807c6d5c */ // 0x807C6D44
    r4 = *(0x1c + r29); // lha @ 0x807C6D48
    /* b 0x807c6d5c */ // 0x807C6D4C
    r4 = *(0x1e + r29); // lha @ 0x807C6D50
    /* b 0x807c6d5c */ // 0x807C6D54
    r4 = *(0x20 + r29); // lha @ 0x807C6D58
    r0 = r4 ^ r3; // 0x807C6D5C
    r3 = r0 >> 1; // srawi
    r0 = r0 & r4; // 0x807C6D64
    /* subf r0, r0, r3 */ // 0x807C6D68
    /* srwi r0, r0, 0x1f */ // 0x807C6D6C
    *(0x18c + r28) = r0; // stb @ 0x807C6D70
    r31 = *(0x1c + r1); // lwz @ 0x807C6D74
    r30 = *(0x18 + r1); // lwz @ 0x807C6D78
    r29 = *(0x14 + r1); // lwz @ 0x807C6D7C
    r28 = *(0x10 + r1); // lwz @ 0x807C6D80
    r0 = *(0x24 + r1); // lwz @ 0x807C6D84
    return;
}