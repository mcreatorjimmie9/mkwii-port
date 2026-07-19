/* Function at 0x806E1D08, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806E1D08(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E1D18
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E1D20
    r30 = r3;
    if (==) goto 0x0x806e1d98;
    /* lis r4, 0 */ // 0x806E1D2C
    /* li r5, 0x174 */ // 0x806E1D30
    r4 = r4 + 0; // 0x806E1D34
    /* li r6, 0xc */ // 0x806E1D38
    r3 = r3 + 0x7b8; // 0x806E1D3C
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x564; // 0x806E1D44
    /* li r4, -1 */ // 0x806E1D48
    FUN_806498AC(r6, r3, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x3f0 */ // 0x806E1D50
    if (==) goto 0x0x806e1d60;
    /* li r4, 0 */ // 0x806E1D58
    FUN_806A0540(r4, r4); // bl 0x806A0540
}