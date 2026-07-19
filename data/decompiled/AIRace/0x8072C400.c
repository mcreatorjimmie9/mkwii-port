/*
 * Address: 0x8072C400
 * REL Offset: 0x00219B64
 * Function: AIControlBase::<dtor>
 * Size: 100 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

void AIControlBase(/* unknown params */)
{

    /* 0x219B64 */ // cmpw r3, r0
    /* 0x219B68 */ if (0x34 >= 0) goto loc_0x0034;
    /* 0x219B6C */ r3 = 0x00000;
    /* 0x219B70 */ r3 = r3 + 0x0;
    /* 0x219B74 */ r0 = *(u32*)(r3 + r28);
    /* 0x219B78 */ // cmpwi r0, 0
    /* 0x219B7C */ if (0x28 == 0) goto loc_0x0028;
    /* 0x219B80 */ r0 = 0x1 /* 1 */;
    /* 0x219B84 */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219B88 */ goto loc_0x0434;
    /* 0x219B8C */ r0 = 0x2 /* 2 */;
    /* 0x219B90 */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219B94 */ goto loc_0x0434;
    /* 0x219B98 */ r0 = 0x3 /* 3 */;
    /* 0x219B9C */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219BA0 */ goto loc_0x0434;
    /* 0x219BA4 */ r0 = r4 + 0x1;
    /* 0x219BA8 */ *(u32*)(r30 + 0xC) = r0;
    /* 0x219BAC */ goto loc_0x0434;
    /* 0x219BB0 */ r29 = *(u32*)(r4 + 0xC);
    /* 0x219BB4 */ // cmpwi r29, 0
    /* 0x219BB8 */ if (0x68 == 0) goto loc_0x0068;
    /* 0x219BBC */ r0 = *(u32*)(r4 + 0x24);
    /* 0x219BC0 */ // cmpwi r0, 4
    /* 0x219BC4 */ if (0x68 != 0) goto loc_0x0068;
    /* 0x219BC8 */ goto loc_0x00FC;
    /* 0x219BCC */ r29 = *(u32*)(r4 + 0x10);
    /* 0x219BD0 */ // cmpwi r29, 0
    /* 0x219BD4 */ if (0x84 == 0) goto loc_0x0084;
    /* 0x219BD8 */ r0 = *(u32*)(r4 + 0x28);
    /* 0x219BDC */ // cmpwi r0, 4
    /* 0x219BE0 */ if (0x84 != 0) goto loc_0x0084;
    /* 0x219BE4 */ goto loc_0x00FC;
    /* 0x219BE8 */ r4 = r4 + 0x8;
    /* 0x219BEC */ r29 = *(u32*)(r4 + 0xC);
    /* 0x219BF0 */ // cmpwi r29, 0
    /* 0x219BF4 */ if (0xa4 == 0) goto loc_0x00A4;
    /* 0x219BF8 */ r0 = *(u32*)(r4 + 0x24);
    /* 0x219BFC */ // cmpwi r0, 4
    /* 0x219C00 */ if (0xa4 != 0) goto loc_0x00A4;
    /* 0x219C04 */ goto loc_0x00FC;
    /* 0x219C08 */ r29 = *(u32*)(r4 + 0x10);
    /* 0x219C0C */ // cmpwi r29, 0
    /* 0x219C10 */ if (0xc0 == 0) goto loc_0x00C0;
    /* 0x219C14 */ r0 = *(u32*)(r4 + 0x28);
    /* 0x219C18 */ // cmpwi r0, 4
    /* 0x219C1C */ if (0xc0 != 0) goto loc_0x00C0;
    /* 0x219C20 */ goto loc_0x00FC;
    /* 0x219C24 */ r29 = *(u32*)(r4 + 0x14);
    /* 0x219C28 */ // cmpwi r29, 0
    /* 0x219C2C */ if (0xdc == 0) goto loc_0x00DC;
    /* 0x219C30 */ r0 = *(u32*)(r4 + 0x2C);
    /* 0x219C34 */ // cmpwi r0, 4
    /* 0x219C38 */ if (0xdc != 0) goto loc_0x00DC;
    /* 0x219C3C */ goto loc_0x00FC;
    /* 0x219C40 */ r29 = *(u32*)(r4 + 0x18);
    /* 0x219C44 */ // cmpwi r29, 0
    /* 0x219C48 */ if (0xf8 == 0) goto loc_0x00F8;
    /* 0x219C4C */ r0 = *(u32*)(r4 + 0x30);
    /* 0x219C50 */ // cmpwi r0, 4
    /* 0x219C54 */ if (0xf8 != 0) goto loc_0x00F8;
    /* 0x219C58 */ goto loc_0x00FC;
    /* 0x219C5C */ r29 = 0x0 /* 0 */;
    /* 0x219C60 */ r4 = *(u32*)(r3 + 0xC);
    /* 0x219C64 */ r0 = r4 + 0x-1;
    /* 0x219C68 */ *(u32*)(r3 + 0xC) = r0;
    /* 0x219C6C */ r3 = r31;
    /* 0x219C70 */ sub_0x00003F90();
    /* 0x219C74 */ // cmpwi r3, 0
    /* 0x219C78 */ if (0x434 == 0) goto loc_0x0434;
    /* 0x219C7C */ // cmpwi r29, 0
    /* 0x219C80 */ if (0x12c != 0) goto loc_0x012C;
    /* 0x219C84 */ r0 = *(u32*)(r30 + 0xC);
    /* 0x219C88 */ // cmpwi r0, 0
    /* 0x219C8C */ if (0x434 >= 0) goto loc_0x0434;
    /* 0x219C90 */ r0 = 0x1 /* 1 */;
    /* 0x219C94 */ *(u8*)(r31 + 0x1A0) = r0;
    /* 0x219C98 */ r3 = 0x2 /* 2 */;
    /* 0x219C9C */ *(u32*)(r31 + 0x1A4) = r3;
    /* 0x219CA0 */ r0 = 0x0 /* 0 */;
    /* 0x219CA4 */ *(u32*)(r30 + 0xC) = r0;
    /* 0x219CA8 */ *(u32*)(r30 + 0x8) = r0;
    /* 0x219CAC */ goto loc_0x0434;
    /* 0x219CB0 */ r29 = *(u32*)(r4 + 0xC);
    /* 0x219CB4 */ // cmpwi r29, 0
    /* 0x219CB8 */ if (0x168 == 0) goto loc_0x0168;
    /* 0x219CBC */ r0 = *(u32*)(r4 + 0x24);
    /* 0x219CC0 */ // cmpwi r0, 3
    /* 0x219CC4 */ if (0x168 != 0) goto loc_0x0168;
    /* 0x219CC8 */ goto loc_0x01FC;
    /* 0x219CCC */ r29 = *(u32*)(r4 + 0x10);
    /* 0x219CD0 */ // cmpwi r29, 0
    /* 0x219CD4 */ if (0x184 == 0) goto loc_0x0184;
    /* 0x219CD8 */ r0 = *(u32*)(r4 + 0x28);
    /* 0x219CDC */ // cmpwi r0, 3
    /* 0x219CE0 */ if (0x184 != 0) goto loc_0x0184;
    /* 0x219CE4 */ goto loc_0x01FC;
    /* 0x219CE8 */ r4 = r4 + 0x8;
    /* 0x219CEC */ r29 = *(u32*)(r4 + 0xC);
    /* 0x219CF0 */ // cmpwi r29, 0
}
