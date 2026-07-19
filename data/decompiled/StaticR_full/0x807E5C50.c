/* Function at 0x807E5C50, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_807E5C50(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r5, 0 */ // 0x807E5C58
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807E5C68
    *(0x14 + r1) = r29; // stw @ 0x807E5C6C
    *(0x10 + r1) = r28; // stw @ 0x807E5C70
    r28 = r4;
    FUN_8089F578(); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807E5C7C
    r3 = r3 + 0; // 0x807E5C80
    *(0 + r31) = r3; // stw @ 0x807E5C84
    r3 = *(0 + r28); // lwz @ 0x807E5C88
    r0 = *(0x2c + r3); // lha @ 0x807E5C8C
    *(0xb4 + r31) = r0; // stw @ 0x807E5C90
    if (==) goto 0x0x807e5cb8;
    if (==) goto 0x0x807e5d6c;
    if (==) goto 0x0x807e5e20;
    if (==) goto 0x0x807e5e4c;
    /* b 0x807e5efc */ // 0x807E5CB4
    /* li r3, 0x128 */ // 0x807E5CB8
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x807e5d50;
    /* lis r30, 0 */ // 0x807E5CCC
    r4 = r28;
    r5 = r30 + 0; // 0x807E5CD4
    FUN_8089F578(r4, r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807E5CDC
    /* li r3, 0x7c */ // 0x807E5CE0
    r4 = r4 + 0; // 0x807E5CE4
    *(0 + r29) = r4; // stw @ 0x807E5CE8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x807e5d08;
    r4 = r30 + 0; // 0x807E5CF8
}