/* Function at 0x806FFA20, size=112 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806FFA20(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x806FFA28
    *(0x14 + r1) = r0; // stw @ 0x806FFA2C
    /* addis r0, r3, 1 */ // 0x806FFA30
    r3 = *(0 + r5); // lwz @ 0x806FFA34
    r3 = *(0x36 + r3); // lha @ 0x806FFA38
    /* mulli r3, r3, 0x50 */ // 0x806FFA3C
    r6 = r0 + r3; // 0x806FFA40
    r5 = *(-0x7644 + r6); // lwz @ 0x806FFA44
    if (==) goto 0x0x806ffa64;
    /* lis r3, 0 */ // 0x806FFA50
    r3 = *(0 + r3); // lwz @ 0x806FFA54
    r0 = *(0x78 + r3); // lwz @ 0x806FFA58
    if (==) goto 0x0x806ffa6c;
    /* li r3, 1 */ // 0x806FFA64
    /* b 0x806ffa9c */ // 0x806FFA68
    r5 = r4;
    r6 = r6 + -0x7640; // 0x806FFA74
    /* li r3, 0x79b */ // 0x806FFA78
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x806FFA84
    if (==) goto 0x0x806ffa94;
}