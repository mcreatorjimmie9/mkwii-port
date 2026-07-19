/* Function at 0x806FB8A0, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806FB8A0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806FB8B8
    *(0x10 + r1) = r28; // stw @ 0x806FB8BC
    r0 = *(0x20 + r3); // lbz @ 0x806FB8C0
    if (!=) goto 0x0x806fb910;
    /* li r0, 0 */ // 0x806FB8CC
    *(0x1c + r3) = r0; // stw @ 0x806FB8D0
    r3 = *(0x758c + r3); // lwz @ 0x806FB8D4
    r12 = *(0x18 + r3); // lwz @ 0x806FB8D8
    r12 = *(0xc + r12); // lwz @ 0x806FB8DC
    /* mtctr r12 */ // 0x806FB8E0
    /* bctrl  */ // 0x806FB8E4
    if (!=) goto 0x0x806fb8fc;
    /* li r0, 1 */ // 0x806FB8F0
    *(0x20 + r31) = r0; // stb @ 0x806FB8F4
    /* b 0x806fb910 */ // 0x806FB8F8
    r3 = *(0x758c + r31); // lwz @ 0x806FB8FC
    r0 = *(4 + r3); // lwz @ 0x806FB900
    *(0x1c + r31) = r0; // stw @ 0x806FB904
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fb914 */ // 0x806FB90C
    /* li r3, 0 */ // 0x806FB910
    if (==) goto 0x0x806fb92c;
    /* li r0, 6 */ // 0x806FB91C
    *(0x757c + r31) = r3; // stw @ 0x806FB920
    *(0x14 + r31) = r0; // stw @ 0x806FB924
    /* b 0x806fb9ac */ // 0x806FB928
    /* li r28, 0 */ // 0x806FB92C
    /* li r29, 0 */ // 0x806FB930
    /* b 0x806fb994 */ // 0x806FB934
    r4 = r3 + r29; // 0x806FB938
    /* li r3, 1 */ // 0x806FB93C
    r4 = *(4 + r4); // lwz @ 0x806FB940
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fb974;
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806fb974;
    /* li r0, 6 */ // 0x806FB964
    *(0x757c + r31) = r30; // stw @ 0x806FB968
    *(0x14 + r31) = r0; // stw @ 0x806FB96C
    /* b 0x806fb9ac */ // 0x806FB970
    r0 = *(0x28 + r31); // lbz @ 0x806FB974
    if (==) goto 0x0x806fb98c;
    /* li r0, 1 */ // 0x806FB980
    *(0x14 + r31) = r0; // stw @ 0x806FB984
    /* b 0x806fb9ac */ // 0x806FB988
    r29 = r29 + 4; // 0x806FB98C
    r28 = r28 + 1; // 0x806FB990
    r3 = *(0x4200 + r31); // lwz @ 0x806FB994
    r0 = *(0 + r3); // lwz @ 0x806FB998
    if (<) goto 0x0x806fb938;
    /* li r0, 1 */ // 0x806FB9A4
    *(0x14 + r31) = r0; // stw @ 0x806FB9A8
    r0 = *(0x20 + r31); // lbz @ 0x806FB9AC
    if (==) goto 0x0x806fb9e8;
}