/* Function at 0x8086A9BC, size=68 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8086A9BC(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x8086A9CC
    r30 = r3;
    FUN_8082B664(); // bl 0x8082B664
    r3 = *(0x9c + r30); // lwz @ 0x8086A9D8
    r3 = *(0x10 + r3); // lwz @ 0x8086A9DC
    r3 = *(0 + r3); // lwz @ 0x8086A9E0
    if (==) goto 0x0x8086a9fc;
    r3 = r3 + 0xc; // 0x8086A9EC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8086aa04 */ // 0x8086A9F8
}