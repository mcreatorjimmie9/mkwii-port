/* Function at 0x8065C998, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8065C998(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8065C9A8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8065C9B0
    r30 = r3;
    if (==) goto 0x0x8065ca5c;
    /* li r4, -1 */ // 0x8065C9BC
    r3 = r3 + 0x110c; // 0x8065C9C0
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0xf94; // 0x8065C9C8
    /* li r4, -1 */ // 0x8065C9CC
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    r3 = r30 + 0xe20; // 0x8065C9D4
    /* li r4, -1 */ // 0x8065C9D8
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0xcac; // 0x8065C9E0
    /* li r4, -1 */ // 0x8065C9E4
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0xb38; // 0x8065C9EC
    /* li r4, -1 */ // 0x8065C9F0
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x8d4 */ // 0x8065C9F8
    if (==) goto 0x0x8065ca08;
    /* li r4, 0 */ // 0x8065CA00
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x680; // 0x8065CA08
    /* li r4, -1 */ // 0x8065CA0C
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x42c */ // 0x8065CA14
    if (==) goto 0x0x8065ca24;
    /* li r4, 0 */ // 0x8065CA1C
    FUN_806498AC(r4, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x2b8 */ // 0x8065CA24
    if (==) goto 0x0x8065ca34;
    /* li r4, 0 */ // 0x8065CA2C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x94; // 0x8065CA34
    /* li r4, -1 */ // 0x8065CA38
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8065CA44
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8065ca5c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8065CA60
    r30 = *(8 + r1); // lwz @ 0x8065CA64
    r0 = *(0x14 + r1); // lwz @ 0x8065CA68
    return;
}