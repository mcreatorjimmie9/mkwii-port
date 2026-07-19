/* Function at 0x8070AA60, size=872 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_8070AA60(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x8070AA74
    *(0xd4 + r1) = r29; // stw @ 0x8070AA78
    r0 = *(0x54 + r3); // lwz @ 0x8070AA7C
    if (==) goto 0x0x8070aa9c;
    if (==) goto 0x0x8070ac30;
    if (==) goto 0x0x8070adec;
    /* b 0x8070ae0c */ // 0x8070AA98
    /* lis r3, 0 */ // 0x8070AA9C
    r3 = *(0 + r3); // lwz @ 0x8070AAA0
    r3 = *(0 + r3); // lwz @ 0x8070AAA4
    r29 = *(0x150 + r3); // lwz @ 0x8070AAA8
    if (!=) goto 0x0x8070aabc;
    /* li r29, 0 */ // 0x8070AAB4
    /* b 0x8070ab10 */ // 0x8070AAB8
    /* lis r30, 0 */ // 0x8070AABC
    r30 = r30 + 0; // 0x8070AAC0
    if (==) goto 0x0x8070ab0c;
    r12 = *(0 + r29); // lwz @ 0x8070AAC8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8070AAD0
    /* mtctr r12 */ // 0x8070AAD4
    /* bctrl  */ // 0x8070AAD8
    /* b 0x8070aaf4 */ // 0x8070AADC
    if (!=) goto 0x0x8070aaf0;
    /* li r0, 1 */ // 0x8070AAE8
    /* b 0x8070ab00 */ // 0x8070AAEC
    r3 = *(0 + r3); // lwz @ 0x8070AAF0
    if (!=) goto 0x0x8070aae0;
    /* li r0, 0 */ // 0x8070AAFC
    if (==) goto 0x0x8070ab0c;
    /* b 0x8070ab10 */ // 0x8070AB08
    /* li r29, 0 */ // 0x8070AB0C
    r0 = *(0xa50 + r29); // lwz @ 0x8070AB10
    if (!=) goto 0x0x8070ac08;
    /* lis r3, 0 */ // 0x8070AB1C
    r3 = *(0 + r3); // lwz @ 0x8070AB20
    r3 = *(0 + r3); // lwz @ 0x8070AB24
    r29 = *(0x148 + r3); // lwz @ 0x8070AB28
    if (!=) goto 0x0x8070ab3c;
    /* li r29, 0 */ // 0x8070AB34
    /* b 0x8070ab90 */ // 0x8070AB38
    /* lis r30, 0 */ // 0x8070AB3C
    r30 = r30 + 0; // 0x8070AB40
    if (==) goto 0x0x8070ab8c;
    r12 = *(0 + r29); // lwz @ 0x8070AB48
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8070AB50
    /* mtctr r12 */ // 0x8070AB54
    /* bctrl  */ // 0x8070AB58
    /* b 0x8070ab74 */ // 0x8070AB5C
    if (!=) goto 0x0x8070ab70;
    /* li r0, 1 */ // 0x8070AB68
    /* b 0x8070ab80 */ // 0x8070AB6C
    r3 = *(0 + r3); // lwz @ 0x8070AB70
    if (!=) goto 0x0x8070ab60;
    /* li r0, 0 */ // 0x8070AB7C
    if (==) goto 0x0x8070ab8c;
    /* b 0x8070ab90 */ // 0x8070AB88
    /* li r29, 0 */ // 0x8070AB8C
    r12 = *(0 + r29); // lwz @ 0x8070AB90
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x8070AB98
    /* mtctr r12 */ // 0x8070AB9C
    /* bctrl  */ // 0x8070ABA0
    r3 = r29;
    /* li r4, 0x1af4 */ // 0x8070ABA8
    /* li r5, 0 */ // 0x8070ABAC
    FUN_806496F0(r3, r4, r5); // bl 0x806496F0
    r12 = *(0 + r29); // lwz @ 0x8070ABB4
    r3 = r29;
    /* li r4, 0x1af6 */ // 0x8070ABBC
    /* li r5, 0 */ // 0x8070ABC0
    r12 = *(0x68 + r12); // lwz @ 0x8070ABC4
    /* mtctr r12 */ // 0x8070ABC8
    /* bctrl  */ // 0x8070ABCC
    /* lis r3, 0 */ // 0x8070ABD0
    r4 = *(0x58 + r31); // lwz @ 0x8070ABD4
    r3 = *(0 + r3); // lwz @ 0x8070ABD8
    FUN_806FA070(r3); // bl 0x806FA070
    /* li r0, 1 */ // 0x8070ABE0
    *(0x54 + r31) = r0; // stw @ 0x8070ABE4
    r3 = r31;
    /* li r4, 0x50 */ // 0x8070ABEC
    r12 = *(0 + r31); // lwz @ 0x8070ABF0
    /* li r5, 0 */ // 0x8070ABF4
    r12 = *(0x24 + r12); // lwz @ 0x8070ABF8
    /* mtctr r12 */ // 0x8070ABFC
    /* bctrl  */ // 0x8070AC00
    /* b 0x8070ae0c */ // 0x8070AC04
    r12 = *(0 + r31); // lwz @ 0x8070AC08
    /* lis r5, 0 */ // 0x8070AC0C
    /* lfs f1, 0(r5) */ // 0x8070AC10
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x8070AC18
    /* li r4, 0x7a */ // 0x8070AC1C
    /* li r5, 1 */ // 0x8070AC20
    /* mtctr r12 */ // 0x8070AC24
    /* bctrl  */ // 0x8070AC28
    /* b 0x8070ae0c */ // 0x8070AC2C
    /* lis r3, 0 */ // 0x8070AC30
    r3 = *(0 + r3); // lwz @ 0x8070AC34
    r3 = *(0 + r3); // lwz @ 0x8070AC38
    r29 = *(0x14c + r3); // lwz @ 0x8070AC3C
    if (!=) goto 0x0x8070ac50;
    /* li r29, 0 */ // 0x8070AC48
    /* b 0x8070aca4 */ // 0x8070AC4C
    /* lis r30, 0 */ // 0x8070AC50
    r30 = r30 + 0; // 0x8070AC54
    if (==) goto 0x0x8070aca0;
    r12 = *(0 + r29); // lwz @ 0x8070AC5C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8070AC64
    /* mtctr r12 */ // 0x8070AC68
    /* bctrl  */ // 0x8070AC6C
    /* b 0x8070ac88 */ // 0x8070AC70
    if (!=) goto 0x0x8070ac84;
    /* li r0, 1 */ // 0x8070AC7C
    /* b 0x8070ac94 */ // 0x8070AC80
    r3 = *(0 + r3); // lwz @ 0x8070AC84
    if (!=) goto 0x0x8070ac74;
    /* li r0, 0 */ // 0x8070AC90
    if (==) goto 0x0x8070aca0;
    /* b 0x8070aca4 */ // 0x8070AC9C
    /* li r29, 0 */ // 0x8070ACA0
    r12 = *(0 + r29); // lwz @ 0x8070ACA4
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x8070ACAC
    /* mtctr r12 */ // 0x8070ACB0
    /* bctrl  */ // 0x8070ACB4
    r3 = r29;
    /* li r4, 0x1af4 */ // 0x8070ACBC
    /* li r5, 0 */ // 0x8070ACC0
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    /* lis r30, 0 */ // 0x8070ACC8
    r3 = *(0 + r30); // lwz @ 0x8070ACCC
    FUN_806F58E8(r4, r5); // bl 0x806F58E8
    if (!=) goto 0x0x8070ad0c;
    r12 = *(0 + r29); // lwz @ 0x8070ACDC
    r3 = r29;
    /* li r4, 0x1af7 */ // 0x8070ACE4
    /* li r5, 0 */ // 0x8070ACE8
    r12 = *(0x68 + r12); // lwz @ 0x8070ACEC
    /* mtctr r12 */ // 0x8070ACF0
    /* bctrl  */ // 0x8070ACF4
    r3 = r31;
    /* li r4, 0x50 */ // 0x8070ACFC
    /* li r5, -1 */ // 0x8070AD00
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x8070adc4 */ // 0x8070AD08
    FUN_80654ECC(r4, r5, r3); // bl 0x80654ECC
    r3 = *(0 + r30); // lwz @ 0x8070AD14
    FUN_806F58F0(r3); // bl 0x806F58F0
    *(8 + r1) = r3; // stw @ 0x8070AD1C
    r3 = *(0 + r30); // lwz @ 0x8070AD20
    FUN_806F5918(); // bl 0x806F5918
    if (>) goto 0x0x8070ada8;
    /* lis r4, 0 */ // 0x8070AD30
    /* slwi r0, r3, 2 */ // 0x8070AD34
    r4 = r4 + 0; // 0x8070AD38
    /* lwzx r4, r4, r0 */ // 0x8070AD3C
    /* mtctr r4 */ // 0x8070AD40
    /* bctr  */ // 0x8070AD44
    /* li r4, 0x18a6 */ // 0x8070AD48
    /* b 0x8070adac */ // 0x8070AD4C
    /* li r4, 0x18a7 */ // 0x8070AD50
    /* b 0x8070adac */ // 0x8070AD54
    /* li r4, 0x18a8 */ // 0x8070AD58
    /* b 0x8070adac */ // 0x8070AD5C
    /* li r4, 0x18a9 */ // 0x8070AD60
    /* b 0x8070adac */ // 0x8070AD64
    /* li r4, 0x18aa */ // 0x8070AD68
    /* b 0x8070adac */ // 0x8070AD6C
    /* li r4, 0x18ab */ // 0x8070AD70
    /* b 0x8070adac */ // 0x8070AD74
    /* li r4, 0x18ad */ // 0x8070AD78
    /* b 0x8070adac */ // 0x8070AD7C
    /* lis r3, 0 */ // 0x8070AD80
    r3 = *(0 + r3); // lwz @ 0x8070AD84
    r3 = *(0x90 + r3); // lwz @ 0x8070AD88
    FUN_806845A4(r4, r3); // bl 0x806845A4
    /* lis r4, 0 */ // 0x8070AD90
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8070AD98
    /* li r4, -1 */ // 0x8070AD9C
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x8070ae0c */ // 0x8070ADA4
    /* li r4, 0x18a6 */ // 0x8070ADA8
    r12 = *(0 + r29); // lwz @ 0x8070ADAC
    r3 = r29;
    r12 = *(0x68 + r12); // lwz @ 0x8070ADB8
    /* mtctr r12 */ // 0x8070ADBC
    /* bctrl  */ // 0x8070ADC0
    /* li r0, 3 */ // 0x8070ADC4
}