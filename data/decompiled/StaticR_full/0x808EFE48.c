/* Function at 0x808EFE48, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808EFE48(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808EFE58
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EFE60
    r30 = r3;
    if (==) goto 0x0x808efeac;
    /* li r4, -1 */ // 0x808EFE6C
    r3 = r3 + 0x1b8; // 0x808EFE70
    FUN_806A0540(r4, r3); // bl 0x806A0540
    if (==) goto 0x0x808efe9c;
    if (==) goto 0x0x808efe9c;
    r3 = r30 + 0x5c; // 0x808EFE84
    /* li r4, -1 */ // 0x808EFE88
    FUN_806688C8(r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x808EFE94
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808efeac;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EFEB0
    r30 = *(8 + r1); // lwz @ 0x808EFEB4
    r0 = *(0x14 + r1); // lwz @ 0x808EFEB8
    return;
}