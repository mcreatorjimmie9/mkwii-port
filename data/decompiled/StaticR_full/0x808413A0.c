/* Function at 0x808413A0, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808413A0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808413A8
    r4 = r4 + 0; // 0x808413B0
    *(0x2c + r1) = r31; // stw @ 0x808413B4
    *(0x28 + r1) = r30; // stw @ 0x808413B8
    /* lis r30, 0 */ // 0x808413BC
    r30 = r30 + 0; // 0x808413C0
    *(0x24 + r1) = r29; // stw @ 0x808413C4
    r0 = r30 + 0x12c; // 0x808413C8
    r29 = r3;
    *(8 + r1) = r4; // stw @ 0x808413D0
    *(0x10 + r1) = r0; // stw @ 0x808413D4
    FUN_805E3430(); // bl 0x805E3430
}