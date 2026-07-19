/* Function at 0x806BA930, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806BA930(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806BA940
    r0 = *(0x20 + r3); // lwz @ 0x806BA944
    *(0x350 + r3) = r0; // stw @ 0x806BA948
    if (>=) goto 0x0x806ba95c;
    /* li r0, 0 */ // 0x806BA954
    *(0x350 + r3) = r0; // stw @ 0x806BA958
    /* lis r3, 0 */ // 0x806BA95C
    r3 = *(0 + r3); // lwz @ 0x806BA960
    r3 = *(0 + r3); // lwz @ 0x806BA964
    r30 = *(0xfc + r3); // lwz @ 0x806BA968
    if (!=) goto 0x0x806ba97c;
    /* li r30, 0 */ // 0x806BA974
    /* b 0x806ba9d0 */ // 0x806BA978
    /* lis r31, 0 */ // 0x806BA97C
    r31 = r31 + 0; // 0x806BA980
    if (==) goto 0x0x806ba9cc;
    r12 = *(0 + r30); // lwz @ 0x806BA988
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BA990
    /* mtctr r12 */ // 0x806BA994
    /* bctrl  */ // 0x806BA998
    /* b 0x806ba9b4 */ // 0x806BA99C
    if (!=) goto 0x0x806ba9b0;
    /* li r0, 1 */ // 0x806BA9A8
    /* b 0x806ba9c0 */ // 0x806BA9AC
    r3 = *(0 + r3); // lwz @ 0x806BA9B0
    if (!=) goto 0x0x806ba9a0;
    /* li r0, 0 */ // 0x806BA9BC
    if (==) goto 0x0x806ba9cc;
    /* b 0x806ba9d0 */ // 0x806BA9C8
    /* li r30, 0 */ // 0x806BA9CC
    r3 = *(0x20 + r30); // lwz @ 0x806BA9D0
    /* neg r0, r3 */ // 0x806BA9D4
    r0 = r0 | r3; // 0x806BA9D8
    /* srwi r0, r0, 0x1f */ // 0x806BA9DC
    *(0xa66 + r30) = r0; // stb @ 0x806BA9E0
    r31 = *(0xc + r1); // lwz @ 0x806BA9E4
    r30 = *(8 + r1); // lwz @ 0x806BA9E8
    r0 = *(0x14 + r1); // lwz @ 0x806BA9EC
    return;
}