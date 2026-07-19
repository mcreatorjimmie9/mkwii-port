/* Function at 0x806E2A0C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806E2A0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E2A1C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E2A24
    r30 = r3;
    if (==) goto 0x0x806e2a7c;
    /* li r4, -1 */ // 0x806E2A30
    r3 = r3 + 0x798; // 0x806E2A34
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30 + 0x624; // 0x806E2A3C
    /* li r4, -1 */ // 0x806E2A40
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x806E2A48
    r3 = r30 + 0x44; // 0x806E2A4C
    r4 = r4 + 0; // 0x806E2A50
    /* li r5, 0x178 */ // 0x806E2A54
    /* li r6, 4 */ // 0x806E2A58
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x806E2A64
    FUN_806711C4(r5, r6, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806e2a7c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}