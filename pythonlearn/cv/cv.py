import numpy as np
import pickle
"""
程序功能：k近邻实现cifar10上的样本分类 精度低 测试时间长
"""
#输入训练集和测试集
#解压数据集
def unpickle(file):
    fo=open(file,'rb')
    dict=pickle.load(fo,encoding='bytes')
    print(dict)
    fo.close()
    return dict
#融合训练集和测试集作为输出总样本
def load_cifar10(file):
    data_train = []
    label_train=[]
    #融合训练集
    for i in range(1,6):
        dic=unpickle(file+'data_batch_'+str(i))
        for i_data in dic[b'data']:
            data_train.append(i_data)
        for i_label in dic[b'labels']:
            label_train.append(i_label)
    # print(np.array(data_train).shape)
    # print(np.array(label_train).shape)
    # 融合测试集
    data_test=[]
    label_test=[]
    dic = unpickle(file + 'test_batch')
    for i_data in dic[b'data']:
        data_test.append(i_data)
    for i_label in dic[b'labels']:
        label_test.append(i_label)
    # print(np.array(data_test).shape)
    # print(np.array(label_test).shape)
    return (np.array(data_train),np.array(label_train),np.array(data_test),np.array(label_test))
path='E:\\Code\\vscode\\pythonlearn\\cv\\cifar-10-batches-py\\'
#(50000,3072) (50000,) (10000,3072) (10000,)
(data_train,label_train,data_test,label_test)=load_cifar10(path)
#print(label_train)
print(data_train.shape,label_train.shape,data_test.shape,label_test.shape)
#print(data_test.shape[0])
 
"""
实现最近邻的预测
"""
class NearestNeighbor:
    def __init__(self):
        pass
    def train(self,X,y):
        self.Xtr=X
        self.ytr=y
    def predict(self,X):
        num_test=X.shape[0]
        self.X=X
        Y_pred=np.zeros(num_test,dtype=self.ytr.dtype)
        for i in range(num_test):
            distances=np.sum(np.abs(self.Xtr-self.X[i,:]),axis=1)
            #distances=np.sqrt(np.sum(np.square(self.Xtr-self.X[i,:]),axis=1))
            min_index=np.argmin(distances)
            Y_pred[i]=self.ytr[min_index]
            if i%100==0:
                print('运行到{}步'.format(i))
        return Y_pred
nn=NearestNeighbor()
nn.train(data_train,label_train)
Y_pred=nn.predict(data_test)
accuarcy=np.mean(label_test==Y_pred)
print('accuarcy={}'.format(accuarcy))
