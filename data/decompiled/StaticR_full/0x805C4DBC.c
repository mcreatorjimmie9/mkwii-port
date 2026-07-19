/* Function at 0x805C4DBC, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805C4DBC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805C4DCC
    *(0x18 + r1) = r30; // stw @ 0x805C4DD0
    /* li r30, 1 */ // 0x805C4DD4
    *(0x14 + r1) = r29; // stw @ 0x805C4DD8
    r29 = r3;
    *(0x1a + r3) = r30; // stb @ 0x805C4DE0
    *(0x14 + r3) = r31; // sth @ 0x805C4DE4
    *(0x16 + r3) = r31; // stb @ 0x805C4DE8
    *(0x18 + r3) = r31; // sth @ 0x805C4DEC
    *(0xe + r3) = r30; // stb @ 0x805C4DF0
    *(8 + r3) = r31; // sth @ 0x805C4DF4
    *(0xa + r3) = r31; // stb @ 0x805C4DF8
    *(0xc + r3) = r31; // sth @ 0x805C4DFC
    *(0x41 + r3) = r31; // stb @ 0x805C4E00
    *(0x40 + r3) = r31; // stb @ 0x805C4E04
    FUN_805E3430(); // bl 0x805E3430
}