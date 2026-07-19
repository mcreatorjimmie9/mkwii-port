/* Function at 0x806730A8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806730A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806730B8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806730C0
    r30 = r3;
    if (==) goto 0x0x80673148;
    /* addic. r3, r3, 0xbec */ // 0x806730CC
    if (==) goto 0x0x806730dc;
    /* li r4, 0 */ // 0x806730D4
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0xa78 */ // 0x806730DC
    if (==) goto 0x0x806730ec;
    /* li r4, 0 */ // 0x806730E4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x806730EC
    r3 = r30 + 0x498; // 0x806730F0
    r4 = r4 + 0; // 0x806730F4
    /* li r5, 0x178 */ // 0x806730F8
    /* li r6, 4 */ // 0x806730FC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x324; // 0x80673104
    /* li r4, -1 */ // 0x80673108
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x1b0 */ // 0x80673110
    if (==) goto 0x0x80673120;
    /* li r4, 0 */ // 0x80673118
    FUN_806A0540(r4, r4); // bl 0x806A0540
}