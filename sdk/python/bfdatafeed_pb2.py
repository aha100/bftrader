# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: bfdatafeed.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import bfgateway_pb2 as bfgateway__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='bfdatafeed.proto',
  package='bftrader',
  syntax='proto3',
  serialized_pb=_b('\n\x10\x62\x66\x64\x61tafeed.proto\x12\x08\x62\x66trader\x1a\x0f\x62\x66gateway.proto\"\xff\x01\n\tBfBarData\x12\x0e\n\x06symbol\x18\x01 \x01(\t\x12\x10\n\x08\x65xchange\x18\x02 \x01(\t\x12%\n\x06period\x18\x03 \x01(\x0e\x32\x15.bftrader.BfBarPeriod\x12\x12\n\nactionDate\x18\x04 \x01(\t\x12\x0f\n\x07\x62\x61rTime\x18\x05 \x01(\t\x12\x0e\n\x06volume\x18\x06 \x01(\x05\x12\x14\n\x0copenInterest\x18\x07 \x01(\x01\x12\x12\n\nlastVolume\x18\x08 \x01(\x05\x12\x11\n\topenPrice\x18\t \x01(\x01\x12\x11\n\thighPrice\x18\n \x01(\x01\x12\x10\n\x08lowPrice\x18\x0b \x01(\x01\x12\x12\n\nclosePrice\x18\x0c \x01(\x01\"_\n\x0c\x42\x66GetTickReq\x12\x0e\n\x06symbol\x18\x01 \x01(\t\x12\x10\n\x08\x65xchange\x18\x02 \x01(\t\x12\x0e\n\x06toDate\x18\x03 \x01(\t\x12\x0e\n\x06toTime\x18\x04 \x01(\t\x12\r\n\x05\x63ount\x18\x05 \x01(\x05\"S\n\x0f\x42\x66\x44\x65leteTickReq\x12\x0e\n\x06symbol\x18\x01 \x01(\t\x12\x10\n\x08\x65xchange\x18\x02 \x01(\t\x12\x0e\n\x06toDate\x18\x03 \x01(\t\x12\x0e\n\x06toTime\x18\x04 \x01(\t\"\x85\x01\n\x0b\x42\x66GetBarReq\x12\x0e\n\x06symbol\x18\x01 \x01(\t\x12\x10\n\x08\x65xchange\x18\x02 \x01(\t\x12%\n\x06period\x18\x03 \x01(\x0e\x32\x15.bftrader.BfBarPeriod\x12\x0e\n\x06toDate\x18\x04 \x01(\t\x12\x0e\n\x06toTime\x18\x05 \x01(\t\x12\r\n\x05\x63ount\x18\x06 \x01(\x05\"y\n\x0e\x42\x66\x44\x65leteBarReq\x12\x0e\n\x06symbol\x18\x01 \x01(\t\x12\x10\n\x08\x65xchange\x18\x02 \x01(\t\x12%\n\x06period\x18\x03 \x01(\x0e\x32\x15.bftrader.BfBarPeriod\x12\x0e\n\x06toDate\x18\x04 \x01(\t\x12\x0e\n\x06toTime\x18\x05 \x01(\t\"J\n\x18\x42\x66\x44\x61tafeedGetContractReq\x12\x15\n\rsymbolPattern\x18\x01 \x01(\t\x12\x17\n\x0f\x65xchangePattern\x18\x02 \x01(\t\"?\n\x1b\x42\x66\x44\x61tafeedDeleteContractReq\x12\x0e\n\x06symbol\x18\x01 \x01(\t\x12\x10\n\x08\x65xchange\x18\x02 \x01(\t*\x88\x02\n\x0b\x42\x66\x42\x61rPeriod\x12\x12\n\x0ePERIOD_UNKNOWN\x10\x00\x12\r\n\tPERIOD_S1\x10\x01\x12\r\n\tPERIOD_S3\x10\x02\x12\r\n\tPERIOD_S5\x10\x03\x12\x0e\n\nPERIOD_S10\x10\x04\x12\x0e\n\nPERIOD_S15\x10\x05\x12\x0e\n\nPERIOD_S30\x10\x06\x12\r\n\tPERIOD_M1\x10\x07\x12\r\n\tPERIOD_M3\x10\x08\x12\r\n\tPERIOD_M5\x10\t\x12\x0e\n\nPERIOD_M10\x10\n\x12\x0e\n\nPERIOD_M15\x10\x0b\x12\x0e\n\nPERIOD_M30\x10\x0c\x12\r\n\tPERIOD_H1\x10\r\x12\r\n\tPERIOD_D1\x10\x0e\x12\r\n\tPERIOD_W1\x10\x0f\x32\x84\x05\n\x11\x42\x66\x44\x61tafeedService\x12\x34\n\x04Ping\x12\x14.bftrader.BfPingData\x1a\x14.bftrader.BfPingData\"\x00\x12\x36\n\nInsertTick\x12\x14.bftrader.BfTickData\x1a\x10.bftrader.BfVoid\"\x00\x12;\n\x07GetTick\x12\x16.bftrader.BfGetTickReq\x1a\x14.bftrader.BfTickData\"\x00\x30\x01\x12;\n\nDeleteTick\x12\x19.bftrader.BfDeleteTickReq\x1a\x10.bftrader.BfVoid\"\x00\x12\x34\n\tInsertBar\x12\x13.bftrader.BfBarData\x1a\x10.bftrader.BfVoid\"\x00\x12\x38\n\x06GetBar\x12\x15.bftrader.BfGetBarReq\x1a\x13.bftrader.BfBarData\"\x00\x30\x01\x12\x39\n\tDeleteBar\x12\x18.bftrader.BfDeleteBarReq\x1a\x10.bftrader.BfVoid\"\x00\x12>\n\x0eInsertContract\x12\x18.bftrader.BfContractData\x1a\x10.bftrader.BfVoid\"\x00\x12O\n\x0bGetContract\x12\".bftrader.BfDatafeedGetContractReq\x1a\x18.bftrader.BfContractData\"\x00\x30\x01\x12K\n\x0e\x44\x65leteContract\x12%.bftrader.BfDatafeedDeleteContractReq\x1a\x10.bftrader.BfVoid\"\x00\x62\x06proto3')
  ,
  dependencies=[bfgateway__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

_BFBARPERIOD = _descriptor.EnumDescriptor(
  name='BfBarPeriod',
  full_name='bftrader.BfBarPeriod',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PERIOD_UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_S1', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_S3', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_S5', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_S10', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_S15', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_S30', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_M1', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_M3', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_M5', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_M10', index=10, number=10,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_M15', index=11, number=11,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_M30', index=12, number=12,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_H1', index=13, number=13,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_D1', index=14, number=14,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERIOD_W1', index=15, number=15,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=888,
  serialized_end=1152,
)
_sym_db.RegisterEnumDescriptor(_BFBARPERIOD)

BfBarPeriod = enum_type_wrapper.EnumTypeWrapper(_BFBARPERIOD)
PERIOD_UNKNOWN = 0
PERIOD_S1 = 1
PERIOD_S3 = 2
PERIOD_S5 = 3
PERIOD_S10 = 4
PERIOD_S15 = 5
PERIOD_S30 = 6
PERIOD_M1 = 7
PERIOD_M3 = 8
PERIOD_M5 = 9
PERIOD_M10 = 10
PERIOD_M15 = 11
PERIOD_M30 = 12
PERIOD_H1 = 13
PERIOD_D1 = 14
PERIOD_W1 = 15



_BFBARDATA = _descriptor.Descriptor(
  name='BfBarData',
  full_name='bftrader.BfBarData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbol', full_name='bftrader.BfBarData.symbol', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange', full_name='bftrader.BfBarData.exchange', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='period', full_name='bftrader.BfBarData.period', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='actionDate', full_name='bftrader.BfBarData.actionDate', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='barTime', full_name='bftrader.BfBarData.barTime', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='volume', full_name='bftrader.BfBarData.volume', index=5,
      number=6, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='openInterest', full_name='bftrader.BfBarData.openInterest', index=6,
      number=7, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lastVolume', full_name='bftrader.BfBarData.lastVolume', index=7,
      number=8, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='openPrice', full_name='bftrader.BfBarData.openPrice', index=8,
      number=9, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='highPrice', full_name='bftrader.BfBarData.highPrice', index=9,
      number=10, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lowPrice', full_name='bftrader.BfBarData.lowPrice', index=10,
      number=11, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='closePrice', full_name='bftrader.BfBarData.closePrice', index=11,
      number=12, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=48,
  serialized_end=303,
)


_BFGETTICKREQ = _descriptor.Descriptor(
  name='BfGetTickReq',
  full_name='bftrader.BfGetTickReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbol', full_name='bftrader.BfGetTickReq.symbol', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange', full_name='bftrader.BfGetTickReq.exchange', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toDate', full_name='bftrader.BfGetTickReq.toDate', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toTime', full_name='bftrader.BfGetTickReq.toTime', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='count', full_name='bftrader.BfGetTickReq.count', index=4,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=305,
  serialized_end=400,
)


_BFDELETETICKREQ = _descriptor.Descriptor(
  name='BfDeleteTickReq',
  full_name='bftrader.BfDeleteTickReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbol', full_name='bftrader.BfDeleteTickReq.symbol', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange', full_name='bftrader.BfDeleteTickReq.exchange', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toDate', full_name='bftrader.BfDeleteTickReq.toDate', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toTime', full_name='bftrader.BfDeleteTickReq.toTime', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=402,
  serialized_end=485,
)


_BFGETBARREQ = _descriptor.Descriptor(
  name='BfGetBarReq',
  full_name='bftrader.BfGetBarReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbol', full_name='bftrader.BfGetBarReq.symbol', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange', full_name='bftrader.BfGetBarReq.exchange', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='period', full_name='bftrader.BfGetBarReq.period', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toDate', full_name='bftrader.BfGetBarReq.toDate', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toTime', full_name='bftrader.BfGetBarReq.toTime', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='count', full_name='bftrader.BfGetBarReq.count', index=5,
      number=6, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=488,
  serialized_end=621,
)


_BFDELETEBARREQ = _descriptor.Descriptor(
  name='BfDeleteBarReq',
  full_name='bftrader.BfDeleteBarReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbol', full_name='bftrader.BfDeleteBarReq.symbol', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange', full_name='bftrader.BfDeleteBarReq.exchange', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='period', full_name='bftrader.BfDeleteBarReq.period', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toDate', full_name='bftrader.BfDeleteBarReq.toDate', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='toTime', full_name='bftrader.BfDeleteBarReq.toTime', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=623,
  serialized_end=744,
)


_BFDATAFEEDGETCONTRACTREQ = _descriptor.Descriptor(
  name='BfDatafeedGetContractReq',
  full_name='bftrader.BfDatafeedGetContractReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbolPattern', full_name='bftrader.BfDatafeedGetContractReq.symbolPattern', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchangePattern', full_name='bftrader.BfDatafeedGetContractReq.exchangePattern', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=746,
  serialized_end=820,
)


_BFDATAFEEDDELETECONTRACTREQ = _descriptor.Descriptor(
  name='BfDatafeedDeleteContractReq',
  full_name='bftrader.BfDatafeedDeleteContractReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='symbol', full_name='bftrader.BfDatafeedDeleteContractReq.symbol', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange', full_name='bftrader.BfDatafeedDeleteContractReq.exchange', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=822,
  serialized_end=885,
)

_BFBARDATA.fields_by_name['period'].enum_type = _BFBARPERIOD
_BFGETBARREQ.fields_by_name['period'].enum_type = _BFBARPERIOD
_BFDELETEBARREQ.fields_by_name['period'].enum_type = _BFBARPERIOD
DESCRIPTOR.message_types_by_name['BfBarData'] = _BFBARDATA
DESCRIPTOR.message_types_by_name['BfGetTickReq'] = _BFGETTICKREQ
DESCRIPTOR.message_types_by_name['BfDeleteTickReq'] = _BFDELETETICKREQ
DESCRIPTOR.message_types_by_name['BfGetBarReq'] = _BFGETBARREQ
DESCRIPTOR.message_types_by_name['BfDeleteBarReq'] = _BFDELETEBARREQ
DESCRIPTOR.message_types_by_name['BfDatafeedGetContractReq'] = _BFDATAFEEDGETCONTRACTREQ
DESCRIPTOR.message_types_by_name['BfDatafeedDeleteContractReq'] = _BFDATAFEEDDELETECONTRACTREQ
DESCRIPTOR.enum_types_by_name['BfBarPeriod'] = _BFBARPERIOD

BfBarData = _reflection.GeneratedProtocolMessageType('BfBarData', (_message.Message,), dict(
  DESCRIPTOR = _BFBARDATA,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfBarData)
  ))
_sym_db.RegisterMessage(BfBarData)

BfGetTickReq = _reflection.GeneratedProtocolMessageType('BfGetTickReq', (_message.Message,), dict(
  DESCRIPTOR = _BFGETTICKREQ,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfGetTickReq)
  ))
_sym_db.RegisterMessage(BfGetTickReq)

BfDeleteTickReq = _reflection.GeneratedProtocolMessageType('BfDeleteTickReq', (_message.Message,), dict(
  DESCRIPTOR = _BFDELETETICKREQ,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfDeleteTickReq)
  ))
_sym_db.RegisterMessage(BfDeleteTickReq)

BfGetBarReq = _reflection.GeneratedProtocolMessageType('BfGetBarReq', (_message.Message,), dict(
  DESCRIPTOR = _BFGETBARREQ,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfGetBarReq)
  ))
_sym_db.RegisterMessage(BfGetBarReq)

BfDeleteBarReq = _reflection.GeneratedProtocolMessageType('BfDeleteBarReq', (_message.Message,), dict(
  DESCRIPTOR = _BFDELETEBARREQ,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfDeleteBarReq)
  ))
_sym_db.RegisterMessage(BfDeleteBarReq)

BfDatafeedGetContractReq = _reflection.GeneratedProtocolMessageType('BfDatafeedGetContractReq', (_message.Message,), dict(
  DESCRIPTOR = _BFDATAFEEDGETCONTRACTREQ,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfDatafeedGetContractReq)
  ))
_sym_db.RegisterMessage(BfDatafeedGetContractReq)

BfDatafeedDeleteContractReq = _reflection.GeneratedProtocolMessageType('BfDatafeedDeleteContractReq', (_message.Message,), dict(
  DESCRIPTOR = _BFDATAFEEDDELETECONTRACTREQ,
  __module__ = 'bfdatafeed_pb2'
  # @@protoc_insertion_point(class_scope:bftrader.BfDatafeedDeleteContractReq)
  ))
_sym_db.RegisterMessage(BfDatafeedDeleteContractReq)


import abc
from grpc.beta import implementations as beta_implementations
from grpc.framework.common import cardinality
from grpc.framework.interfaces.face import utilities as face_utilities

class BetaBfDatafeedServiceServicer(object):
  """<fill me in later!>"""
  __metaclass__ = abc.ABCMeta
  @abc.abstractmethod
  def Ping(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def InsertTick(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def GetTick(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def DeleteTick(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def InsertBar(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def GetBar(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def DeleteBar(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def InsertContract(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def GetContract(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def DeleteContract(self, request, context):
    raise NotImplementedError()

class BetaBfDatafeedServiceStub(object):
  """The interface to which stubs will conform."""
  __metaclass__ = abc.ABCMeta
  @abc.abstractmethod
  def Ping(self, request, timeout):
    raise NotImplementedError()
  Ping.future = None
  @abc.abstractmethod
  def InsertTick(self, request, timeout):
    raise NotImplementedError()
  InsertTick.future = None
  @abc.abstractmethod
  def GetTick(self, request, timeout):
    raise NotImplementedError()
  @abc.abstractmethod
  def DeleteTick(self, request, timeout):
    raise NotImplementedError()
  DeleteTick.future = None
  @abc.abstractmethod
  def InsertBar(self, request, timeout):
    raise NotImplementedError()
  InsertBar.future = None
  @abc.abstractmethod
  def GetBar(self, request, timeout):
    raise NotImplementedError()
  @abc.abstractmethod
  def DeleteBar(self, request, timeout):
    raise NotImplementedError()
  DeleteBar.future = None
  @abc.abstractmethod
  def InsertContract(self, request, timeout):
    raise NotImplementedError()
  InsertContract.future = None
  @abc.abstractmethod
  def GetContract(self, request, timeout):
    raise NotImplementedError()
  @abc.abstractmethod
  def DeleteContract(self, request, timeout):
    raise NotImplementedError()
  DeleteContract.future = None

def beta_create_BfDatafeedService_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
  import bfgateway_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfdatafeed_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  request_deserializers = {
    ('bftrader.BfDatafeedService', 'DeleteBar'): bfdatafeed_pb2.BfDeleteBarReq.FromString,
    ('bftrader.BfDatafeedService', 'DeleteContract'): bfdatafeed_pb2.BfDatafeedDeleteContractReq.FromString,
    ('bftrader.BfDatafeedService', 'DeleteTick'): bfdatafeed_pb2.BfDeleteTickReq.FromString,
    ('bftrader.BfDatafeedService', 'GetBar'): bfdatafeed_pb2.BfGetBarReq.FromString,
    ('bftrader.BfDatafeedService', 'GetContract'): bfdatafeed_pb2.BfDatafeedGetContractReq.FromString,
    ('bftrader.BfDatafeedService', 'GetTick'): bfdatafeed_pb2.BfGetTickReq.FromString,
    ('bftrader.BfDatafeedService', 'InsertBar'): bfdatafeed_pb2.BfBarData.FromString,
    ('bftrader.BfDatafeedService', 'InsertContract'): bfgateway_pb2.BfContractData.FromString,
    ('bftrader.BfDatafeedService', 'InsertTick'): bfgateway_pb2.BfTickData.FromString,
    ('bftrader.BfDatafeedService', 'Ping'): bfgateway_pb2.BfPingData.FromString,
  }
  response_serializers = {
    ('bftrader.BfDatafeedService', 'DeleteBar'): bfgateway_pb2.BfVoid.SerializeToString,
    ('bftrader.BfDatafeedService', 'DeleteContract'): bfgateway_pb2.BfVoid.SerializeToString,
    ('bftrader.BfDatafeedService', 'DeleteTick'): bfgateway_pb2.BfVoid.SerializeToString,
    ('bftrader.BfDatafeedService', 'GetBar'): bfdatafeed_pb2.BfBarData.SerializeToString,
    ('bftrader.BfDatafeedService', 'GetContract'): bfgateway_pb2.BfContractData.SerializeToString,
    ('bftrader.BfDatafeedService', 'GetTick'): bfgateway_pb2.BfTickData.SerializeToString,
    ('bftrader.BfDatafeedService', 'InsertBar'): bfgateway_pb2.BfVoid.SerializeToString,
    ('bftrader.BfDatafeedService', 'InsertContract'): bfgateway_pb2.BfVoid.SerializeToString,
    ('bftrader.BfDatafeedService', 'InsertTick'): bfgateway_pb2.BfVoid.SerializeToString,
    ('bftrader.BfDatafeedService', 'Ping'): bfgateway_pb2.BfPingData.SerializeToString,
  }
  method_implementations = {
    ('bftrader.BfDatafeedService', 'DeleteBar'): face_utilities.unary_unary_inline(servicer.DeleteBar),
    ('bftrader.BfDatafeedService', 'DeleteContract'): face_utilities.unary_unary_inline(servicer.DeleteContract),
    ('bftrader.BfDatafeedService', 'DeleteTick'): face_utilities.unary_unary_inline(servicer.DeleteTick),
    ('bftrader.BfDatafeedService', 'GetBar'): face_utilities.unary_stream_inline(servicer.GetBar),
    ('bftrader.BfDatafeedService', 'GetContract'): face_utilities.unary_stream_inline(servicer.GetContract),
    ('bftrader.BfDatafeedService', 'GetTick'): face_utilities.unary_stream_inline(servicer.GetTick),
    ('bftrader.BfDatafeedService', 'InsertBar'): face_utilities.unary_unary_inline(servicer.InsertBar),
    ('bftrader.BfDatafeedService', 'InsertContract'): face_utilities.unary_unary_inline(servicer.InsertContract),
    ('bftrader.BfDatafeedService', 'InsertTick'): face_utilities.unary_unary_inline(servicer.InsertTick),
    ('bftrader.BfDatafeedService', 'Ping'): face_utilities.unary_unary_inline(servicer.Ping),
  }
  server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
  return beta_implementations.server(method_implementations, options=server_options)

def beta_create_BfDatafeedService_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
  import bfgateway_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfdatafeed_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  import bfdatafeed_pb2
  import bfgateway_pb2
  request_serializers = {
    ('bftrader.BfDatafeedService', 'DeleteBar'): bfdatafeed_pb2.BfDeleteBarReq.SerializeToString,
    ('bftrader.BfDatafeedService', 'DeleteContract'): bfdatafeed_pb2.BfDatafeedDeleteContractReq.SerializeToString,
    ('bftrader.BfDatafeedService', 'DeleteTick'): bfdatafeed_pb2.BfDeleteTickReq.SerializeToString,
    ('bftrader.BfDatafeedService', 'GetBar'): bfdatafeed_pb2.BfGetBarReq.SerializeToString,
    ('bftrader.BfDatafeedService', 'GetContract'): bfdatafeed_pb2.BfDatafeedGetContractReq.SerializeToString,
    ('bftrader.BfDatafeedService', 'GetTick'): bfdatafeed_pb2.BfGetTickReq.SerializeToString,
    ('bftrader.BfDatafeedService', 'InsertBar'): bfdatafeed_pb2.BfBarData.SerializeToString,
    ('bftrader.BfDatafeedService', 'InsertContract'): bfgateway_pb2.BfContractData.SerializeToString,
    ('bftrader.BfDatafeedService', 'InsertTick'): bfgateway_pb2.BfTickData.SerializeToString,
    ('bftrader.BfDatafeedService', 'Ping'): bfgateway_pb2.BfPingData.SerializeToString,
  }
  response_deserializers = {
    ('bftrader.BfDatafeedService', 'DeleteBar'): bfgateway_pb2.BfVoid.FromString,
    ('bftrader.BfDatafeedService', 'DeleteContract'): bfgateway_pb2.BfVoid.FromString,
    ('bftrader.BfDatafeedService', 'DeleteTick'): bfgateway_pb2.BfVoid.FromString,
    ('bftrader.BfDatafeedService', 'GetBar'): bfdatafeed_pb2.BfBarData.FromString,
    ('bftrader.BfDatafeedService', 'GetContract'): bfgateway_pb2.BfContractData.FromString,
    ('bftrader.BfDatafeedService', 'GetTick'): bfgateway_pb2.BfTickData.FromString,
    ('bftrader.BfDatafeedService', 'InsertBar'): bfgateway_pb2.BfVoid.FromString,
    ('bftrader.BfDatafeedService', 'InsertContract'): bfgateway_pb2.BfVoid.FromString,
    ('bftrader.BfDatafeedService', 'InsertTick'): bfgateway_pb2.BfVoid.FromString,
    ('bftrader.BfDatafeedService', 'Ping'): bfgateway_pb2.BfPingData.FromString,
  }
  cardinalities = {
    'DeleteBar': cardinality.Cardinality.UNARY_UNARY,
    'DeleteContract': cardinality.Cardinality.UNARY_UNARY,
    'DeleteTick': cardinality.Cardinality.UNARY_UNARY,
    'GetBar': cardinality.Cardinality.UNARY_STREAM,
    'GetContract': cardinality.Cardinality.UNARY_STREAM,
    'GetTick': cardinality.Cardinality.UNARY_STREAM,
    'InsertBar': cardinality.Cardinality.UNARY_UNARY,
    'InsertContract': cardinality.Cardinality.UNARY_UNARY,
    'InsertTick': cardinality.Cardinality.UNARY_UNARY,
    'Ping': cardinality.Cardinality.UNARY_UNARY,
  }
  stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
  return beta_implementations.dynamic_stub(channel, 'bftrader.BfDatafeedService', cardinalities, options=stub_options)
# @@protoc_insertion_point(module_scope)
