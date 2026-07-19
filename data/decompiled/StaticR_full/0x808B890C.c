/* Function at 0x808B890C, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808B890C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808B891C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808B8924
    r30 = r3;
    if (==) goto 0x0x808b8980;
    /* addic. r3, r3, 0x6c4 */ // 0x808B8930
    if (==) goto 0x0x808b8940;
    /* li r4, 0 */ // 0x808B8938
    FUN_806A0540(r4); // bl 0x806A0540
    r3 = r30 + 0x430; // 0x808B8940
    /* li r4, -1 */ // 0x808B8944
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808b8970;
    /* addic. r3, r30, 0x54 */ // 0x808B8954
    if (==) goto 0x0x808b8964;
    /* li r4, 0 */ // 0x808B895C
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808B8968
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808b8980;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B8984
    r30 = *(8 + r1); // lwz @ 0x808B8988
    r0 = *(0x14 + r1); // lwz @ 0x808B898C
    return;
}