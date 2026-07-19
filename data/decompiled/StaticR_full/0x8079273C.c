/* Function at 0x8079273C, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8079273C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80792754
    r29 = r3;
    r3 = r3 + 0x88; // 0x8079275C
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x80792774;
    /* li r3, 0 */ // 0x8079276C
    /* b 0x80792838 */ // 0x80792770
    r3 = *(0x80 + r29); // lwz @ 0x80792774
    /* li r31, 0 */ // 0x80792778
    if (==) goto 0x0x807927a0;
    if (==) goto 0x0x80792790;
    r0 = *(0x90 + r3); // lwz @ 0x80792788
    /* b 0x80792794 */ // 0x8079278C
    /* li r0, -1 */ // 0x80792790
    if (!=) goto 0x0x807927a0;
    r31 = r29 + 0x80; // 0x8079279C
    if (!=) goto 0x0x80792810;
    r3 = *(0x80 + r29); // lwz @ 0x807927A8
    if (!=) goto 0x0x807927bc;
    r31 = r29 + 0x80; // 0x807927B4
    /* b 0x80792810 */ // 0x807927B8
    if (==) goto 0x0x807927c8;
    r0 = *(0x90 + r3); // lwz @ 0x807927C0
    /* b 0x807927cc */ // 0x807927C4
    /* li r0, -1 */ // 0x807927C8
    *(8 + r1) = r0; // stw @ 0x807927CC
    r4 = r30;
    r3 = r29 + 0x88; // 0x807927D4
    /* li r6, 1 */ // 0x807927DC
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x807927f4;
    /* li r31, 0 */ // 0x807927EC
    /* b 0x80792810 */ // 0x807927F0
    /* slwi r0, r3, 2 */ // 0x807927F4
    r31 = r29 + r0; // 0x807927F8
    r3 = *(0x80 + r31); // lwzu @ 0x807927FC
    if (==) goto 0x0x80792810;
    /* li r4, 0 */ // 0x80792808
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80792834;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80792824
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80792838 */ // 0x80792830
    /* li r3, 0 */ // 0x80792834
    r0 = *(0x24 + r1); // lwz @ 0x80792838
    r31 = *(0x1c + r1); // lwz @ 0x8079283C
    r30 = *(0x18 + r1); // lwz @ 0x80792840
    r29 = *(0x14 + r1); // lwz @ 0x80792844
}