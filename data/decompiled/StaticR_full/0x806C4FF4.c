/* Function at 0x806C4FF4, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806C4FF4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x806C5000
    *(0xc + r1) = r31; // stw @ 0x806C5004
    /* lis r31, 0 */ // 0x806C5008
    *(8 + r1) = r30; // stw @ 0x806C500C
    r30 = r3;
    *(0xb08 + r3) = r0; // stw @ 0x806C5014
    r3 = *(0 + r31); // lwz @ 0x806C5018
    r4 = *(0 + r3); // lwz @ 0x806C501C
    r0 = *(0 + r4); // lwz @ 0x806C5020
    if (==) goto 0x0x806c5038;
    if (==) goto 0x0x806c5064;
    /* b 0x806c5080 */ // 0x806C5034
    /* li r4, 0x7c */ // 0x806C5038
    /* li r5, 0 */ // 0x806C503C
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806C5044
    /* li r4, 0 */ // 0x806C5048
    /* li r5, 0xff */ // 0x806C504C
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r3 = *(0 + r31); // lwz @ 0x806C5054
    r3 = *(0 + r3); // lwz @ 0x806C5058
    FUN_80686240(r4, r5); // bl 0x80686240
    /* b 0x806c5080 */ // 0x806C5060
    /* li r4, 0xa0 */ // 0x806C5064
    /* li r5, 0 */ // 0x806C5068
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806C5070
    /* li r4, 0 */ // 0x806C5074
    /* li r5, 0xff */ // 0x806C5078
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* lis r4, 0 */ // 0x806C5080
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x806C5088
    /* li r4, 1 */ // 0x806C508C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806C5094
    r31 = *(0xc + r1); // lwz @ 0x806C5098
    r30 = *(8 + r1); // lwz @ 0x806C509C
    return;
}