/* Function at 0x808ED9F0, size=420 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_808ED9F0(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0xd8 + r1) = r30; // stw @ 0x808EDA04
    r30 = r4;
    *(0xd4 + r1) = r29; // stw @ 0x808EDA0C
    r29 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    if (==) goto 0x0x808edaa0;
    r3 = r30;
    FUN_8089E31C(r3, r3); // bl 0x8089E31C
    if (==) goto 0x0x808eda50;
    /* li r0, 0x235c */ // 0x808EDA34
    *(0x2c + r1) = r0; // stw @ 0x808EDA38
    r3 = r29 + 0x6c4; // 0x808EDA3C
    /* li r4, 0x1f43 */ // 0x808EDA44
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDA4C
    r3 = r30;
    FUN_8089E350(r5, r4, r3); // bl 0x8089E350
    if (==) goto 0x0x808eda7c;
    /* li r0, 0x235d */ // 0x808EDA60
    *(0x2c + r1) = r0; // stw @ 0x808EDA64
    r3 = r29 + 0x6c4; // 0x808EDA68
    /* li r4, 0x1f43 */ // 0x808EDA70
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDA78
    r3 = r30;
    /* li r4, 1 */ // 0x808EDA80
    FUN_808AF914(r4, r3, r4); // bl 0x808AF914
    *(0x2c + r1) = r3; // stw @ 0x808EDA88
    r3 = r29 + 0x6c4; // 0x808EDA8C
    /* li r4, 0x1f42 */ // 0x808EDA94
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDA9C
    if (==) goto 0x0x808edb78;
    r3 = r31;
    FUN_808AF680(r3); // bl 0x808AF680
    *(0x2c + r1) = r3; // stw @ 0x808EDAB4
    if (>=) goto 0x0x808edb1c;
    r3 = r31;
    FUN_8089DE64(r3); // bl 0x8089DE64
    if (==) goto 0x0x808edae0;
    if (==) goto 0x0x808edaf4;
    if (==) goto 0x0x808edb08;
    /* b 0x808edb78 */ // 0x808EDADC
    r3 = r29 + 0x6c4; // 0x808EDAE0
    /* li r4, 0x1f44 */ // 0x808EDAE8
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDAF0
    r3 = r29 + 0x6c4; // 0x808EDAF4
    /* li r4, 0x1f45 */ // 0x808EDAFC
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDB04
    r3 = r29 + 0x6c4; // 0x808EDB08
    /* li r4, 0x1f46 */ // 0x808EDB10
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDB18
    r3 = r31;
    FUN_8089DE64(r5, r4, r3); // bl 0x8089DE64
    if (==) goto 0x0x808edb40;
    if (==) goto 0x0x808edb54;
    if (==) goto 0x0x808edb68;
    /* b 0x808edb78 */ // 0x808EDB3C
    r3 = r29 + 0x6c4; // 0x808EDB40
    /* li r4, 0x1f47 */ // 0x808EDB48
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDB50
    r3 = r29 + 0x6c4; // 0x808EDB54
    /* li r4, 0x1f48 */ // 0x808EDB5C
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x808edb78 */ // 0x808EDB64
    r3 = r29 + 0x6c4; // 0x808EDB68
    /* li r4, 0x1f49 */ // 0x808EDB70
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x808EDB78
    r31 = *(0xdc + r1); // lwz @ 0x808EDB7C
    r30 = *(0xd8 + r1); // lwz @ 0x808EDB80
    r29 = *(0xd4 + r1); // lwz @ 0x808EDB84
    return;
}