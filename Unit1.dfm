object Form1: TForm1
  Left = 739
  Top = 168
  Width = 486
  Height = 431
  Caption = 'VCM Driving Board Sample'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 24
    Top = 16
    Width = 89
    Height = 25
    Caption = 'DownLoad FW'
    TabOrder = 0
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 24
    Top = 56
    Width = 161
    Height = 185
    Caption = 'AK7375_Actuator Control'
    TabOrder = 1
    object Label2: TLabel
      Left = 8
      Top = 128
      Width = 55
      Height = 13
      Caption = '( 0 ~ 4095 )'
    end
    object Label1: TLabel
      Left = 8
      Top = 72
      Width = 71
      Height = 13
      Caption = 'Select I2C Port'
    end
    object Label3: TLabel
      Left = 8
      Top = 24
      Width = 78
      Height = 13
      Caption = 'Device  Address'
    end
    object Edit2: TEdit
      Left = 8
      Top = 144
      Width = 65
      Height = 21
      TabOrder = 0
      Text = '0'
    end
    object Button2: TButton
      Left = 80
      Top = 144
      Width = 49
      Height = 25
      Caption = 'Move'
      TabOrder = 1
      OnClick = Button2Click
    end
    object ComboBox1: TComboBox
      Left = 8
      Top = 88
      Width = 73
      Height = 21
      ItemHeight = 13
      ItemIndex = 0
      TabOrder = 2
      Text = '0'
      Items.Strings = (
        '0'
        '1'
        '2')
    end
    object Edit1: TEdit
      Left = 8
      Top = 40
      Width = 49
      Height = 21
      TabOrder = 3
      Text = '0x18'
    end
    object Button3: TButton
      Left = 64
      Top = 40
      Width = 41
      Height = 17
      Caption = 'Set'
      TabOrder = 4
      OnClick = Button3Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 192
    Top = 56
    Width = 153
    Height = 185
    Caption = 'INA209_ADC Control'
    TabOrder = 2
    object Label4: TLabel
      Left = 8
      Top = 24
      Width = 75
      Height = 13
      Caption = 'Device Address'
    end
    object Label5: TLabel
      Left = 8
      Top = 72
      Width = 80
      Height = 13
      Caption = 'Register Address'
    end
    object Label6: TLabel
      Left = 8
      Top = 128
      Width = 27
      Height = 13
      Caption = 'Value'
    end
    object Edit3: TEdit
      Left = 8
      Top = 40
      Width = 49
      Height = 21
      TabOrder = 0
      Text = '0x80'
    end
    object Button4: TButton
      Left = 64
      Top = 40
      Width = 41
      Height = 17
      Caption = 'Set'
      TabOrder = 1
      OnClick = Button4Click
    end
    object Edit4: TEdit
      Left = 8
      Top = 88
      Width = 57
      Height = 21
      TabOrder = 2
      Text = '0x00'
    end
    object Edit5: TEdit
      Left = 8
      Top = 144
      Width = 57
      Height = 21
      TabOrder = 3
      Text = '0x00'
    end
    object Button5: TButton
      Left = 96
      Top = 128
      Width = 49
      Height = 17
      Caption = 'Write'
      TabOrder = 4
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 96
      Top = 152
      Width = 49
      Height = 17
      Caption = 'Read'
      TabOrder = 5
      OnClick = Button6Click
    end
  end
  object GroupBox3: TGroupBox
    Left = 352
    Top = 112
    Width = 97
    Height = 129
    Caption = 'Relay Control'
    TabOrder = 3
    object CheckBox1: TCheckBox
      Left = 16
      Top = 24
      Width = 65
      Height = 25
      Caption = 'Relay 1'
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 16
      Top = 56
      Width = 65
      Height = 25
      Caption = 'Relay 2'
      TabOrder = 1
      OnClick = CheckBox2Click
    end
    object CheckBox3: TCheckBox
      Left = 16
      Top = 96
      Width = 65
      Height = 17
      Caption = 'Relay 3'
      TabOrder = 2
      OnClick = CheckBox3Click
    end
  end
  object GroupBox4: TGroupBox
    Left = 24
    Top = 248
    Width = 169
    Height = 137
    Caption = 'AK7375_ADC Control'
    TabOrder = 4
    object Label7: TLabel
      Left = 8
      Top = 32
      Width = 80
      Height = 13
      Caption = 'Register Address'
    end
    object Label8: TLabel
      Left = 8
      Top = 80
      Width = 27
      Height = 13
      Caption = 'Value'
    end
    object Edit6: TEdit
      Left = 8
      Top = 48
      Width = 57
      Height = 21
      TabOrder = 0
      Text = '0x02'
    end
    object Button8: TButton
      Left = 80
      Top = 88
      Width = 57
      Height = 33
      Caption = 'Read'
      TabOrder = 1
      OnClick = Button8Click
    end
    object Edit7: TEdit
      Left = 8
      Top = 96
      Width = 57
      Height = 21
      TabOrder = 2
      Text = '0x00'
    end
  end
  object Button9: TButton
    Left = 232
    Top = 312
    Width = 65
    Height = 33
    Caption = 'Active'
    TabOrder = 5
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 376
    Top = 312
    Width = 65
    Height = 33
    Caption = 'Sleep'
    TabOrder = 6
    OnClick = Button10Click
  end
  object Button7: TButton
    Left = 304
    Top = 272
    Width = 65
    Height = 33
    Caption = 'Stand-by'
    TabOrder = 7
    OnClick = Button7Click
  end
end
