/* Function at 0x8070760C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8070760C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80707614
    r0 = *(0x10 + r3); // lwz @ 0x80707618
    if (!=) goto 0x0x8070764c;
    /* li r4, 0x52 */ // 0x80707624
    /* li r5, -1 */ // 0x80707628
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x80707630
    /* lis r5, 0 */ // 0x80707634
    /* lfs f1, 0(r5) */ // 0x80707638
    /* li r4, 5 */ // 0x8070763C
    r3 = *(0 + r3); // lwz @ 0x80707640
    /* li r5, 0x1e */ // 0x80707644
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x8070764C
    return;
}